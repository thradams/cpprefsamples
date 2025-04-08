/*
  A quick and dirty code to grab source code from cppreference HTML pages.
*/

#include "fs.h"
#include <errno.h>
#include <string.h>
#include <stdio.h>


static int compile_many_files(const char * base, const char * path, const char * output)
{
    const char * file_name_extension = ".html";
    int num_files = 0;

    DIR * dir = opendir(path);

    if (dir == NULL)
    {
        return errno;
    }

    struct dirent * dp;
    while ((dp = readdir(dir)) != NULL)
    {
        if (strcmp(dp->d_name, ".") == 0 || strcmp(dp->d_name, "..") == 0)
        {
            /* skip self and parent */
            continue;
        }

        char fromlocal[257] = { 0 };
        snprintf(fromlocal, sizeof fromlocal, "%s/%s", "", dp->d_name);

        if (dp->d_type & DT_DIR)
        {
            char d[257] = { 0 };
            snprintf(d, sizeof d, "%s/%s", path, dp->d_name);

            compile_many_files(dp->d_name, d, output);
        }
        else
        {
            const char * const file_name_iter = basename(dp->d_name);
            const char * file_name_extension = strrchr((char *) file_name_iter, '.');

            char fullpath[200] = { 0 };
            snprintf(fullpath, sizeof fullpath, "%s/%s", path, file_name_iter);

            if (file_name_extension && strcmp(file_name_extension, ".html") == 0)
            {
                char * content = read_file(fullpath, false);
                if (content)
                {
                    int src_count = 0;
                    const char * begin = strstr(content, "Run this code");
                    while (begin)
                    {
                        begin += (sizeof("Run this code") - 1);

                        const char * end = strstr(begin, "</pre></div></div>");
                        if (end)
                        {
                            char out_file_name_final[200] = { 0 };
                            snprintf(out_file_name_final, sizeof out_file_name_final, "%s/%s_%s", output, base, file_name_iter);
                            char * dot = strrchr((char *) out_file_name_final, '.');

                            if (src_count > 0)
                            {
                                dot[0] = '0' + (src_count % 10);
                                dot[1] = '0' + (src_count / 10);
                                dot[2] = '.';
                                dot[3] = 'c';
                                dot[4] = '\0';
                            }
                            else
                            {
                                dot[1] = 'c';
                                dot[2] = '\0';
                            }


                            FILE * fp = fopen(out_file_name_final, "w");
                            if (fp == NULL)
                            {
                                int e = errno;
                                printf("%d", e);
                            }

                            fprintf(fp, "//https://en.cppreference.com/w/c/%s/%s\n", base, file_name_iter);

                            const char * it = begin;
                            for (; it < end; )
                            {
                                if (*it == '<')
                                {
                                    while (*it != '>')
                                    {
                                        it++;
                                    }
                                    it++;
                                }
                                else if (strncmp(it, "&lt;", sizeof("&lt;") - 1) == 0)
                                {
                                    fprintf(fp, "<");
                                    it += 4;
                                }
                                else if (strncmp(it, "&gt;", sizeof("&gt;") - 1) == 0)
                                {
                                    fprintf(fp, ">");
                                    it += 4;
                                }
                                else if (strncmp(it, "&amp;", sizeof("&amp;") - 1) == 0)
                                {
                                    fprintf(fp, "&");
                                    it += 5;
                                }
                                else if (strncmp(it, "&quot;", sizeof("&quot;") - 1) == 0)
                                {
                                    fprintf(fp, "&");
                                    it += (sizeof("&quot;") - 1);
                                }
                                else if (*it == '\n')
                                {
                                    fprintf(fp, "\n");
                                    it++;
                                }
                                else if (*it == '\r')
                                {
                                    it++;
                                }
                                else if (*it < 32 || *it > 128)
                                {
                                    it++;
                                }
                                else
                                {
                                    fprintf(fp, "%c", *it);
                                    it++;
                                }
                            }
                            fclose(fp);
                            num_files++;
                        }
                        //
                        begin = strstr(end, "Run this code");
                        src_count++;
                    }
                }
            }
        }
    }

    closedir(dir);
    return num_files;
}

int main()
{
    //1) - download the offline version 
    //   https://en.cppreference.com/w/Cppreference:Archives

    compile_many_files("",
        "C:/Users/thiago/Downloads/html-book-20250209/reference/en/c",  /*sources*/
        "C:/Users/thiago/source/repos/cpprefsamples/out"); /*output dir*/
}