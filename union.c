#include <stdio.h>
#include <string.h>

union Data
{
    int i;
    float f;
    char str[20];
};

int main()
{
    union Data d;

    d.i = 10;
    printf("Integer : %d\n", d.i);

    d.f = 5.5;
    printf("Float   : %.2f\n", d.f);

    // Integer value gets overwritten now

    strcpy(d.str, "Hello");
    printf("String  : %s\n", d.str);

    //Difference between Struct and Union
    //In a structure, each member has its own memory location, and the total size of
    //the structure is the sum of the sizes of all its members. In contrast, in a union, all members share the same memory location, and the size of the union is determined by the size of its largest member.
    //Example:
    //Structure is taking 28 bytes of memory (4 bytes for int, 4 bytes for float, and 20 bytes for char array), while the union is taking only 20 bytes of memory (the size of the largest member, which is the char array).
    //So the best opt
    
    return 0;
}