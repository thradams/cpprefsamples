//https://en.cppreference.com/w/c/language/struct.html

#include <stddef.h>
#include <stdio.h>

int main(void)
{
    // Declare the struct type.
    struct car
    {
        char* make;
        int year;
    };
    // Declare and initialize an object of a previously-declared struct type.
    struct car c = {.year = 1923, .make = "Nash"};
    printf("1) Car:%d%s\n", c.year, c.make);

    // Declare a struct type, an object of that type, and a pointer to it.
    struct spaceship
    {
        char* model;
        int max_speed;
    } ship = {"T-65 X-wing starfighter", 1050},
    *pship = &ship;
    printf("2) Spaceship:%s. Max speed:%d km/h\n\n", ship.model, ship.max_speed);

    // Address increase in order of definition. Padding may be inserted.
    struct A { char a; double b; char c; };
    printf(
        "3) Offset of char a =%zu\n"
        "4) Offset of double b =%zu\n"
        "5) Offset of char c =%zu\n"
        "6) Size of struct A =%zu\n\n",
        offsetof(struct A, a),
        offsetof(struct A, b),
        offsetof(struct A, c),
        sizeof(struct A)
    );
    struct B { char a; char b; double c; };
    printf(
        "7) Offset of char a =%zu\n"
        "8) Offset of char b =%zu\n"
        "9) Offset of double c =%zu\n"
        "A) Size of struct B =%zu\n\n",
        offsetof(struct B, a),
        offsetof(struct B, b),
        offsetof(struct B, c),
        sizeof(struct B)
    );

    // A pointer to a struct can be cast to a pointer
    // to its first member and vice versa.
    char** pmodel = (char **)pship;
    printf("B)%s\n", *pmodel);
    pship = (struct spaceship *)pmodel;
}