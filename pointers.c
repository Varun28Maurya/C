#include <stdio.h>

int main()
{
    // Normal integer variable
    int i = 10;

    // Pointer variable
    // p stores the address of i
    int *p = &i;

    // Double pointer variable
    // pp stores the address of pointer p
    int **pp = &p;

    // Printing value of i directly
    printf("Value of i = %d\n", i);

    // Printing address of i
    printf("Address of i = %p\n", (void*)&i);

    printf("\n");

    // Printing value stored inside pointer p
    // p contains address of i
    printf("Value stored in pointer p = %p\n", (void*)p);

    // Printing value of i using pointer
    // *p means value at address stored in p
    printf("Value of i using pointer *p = %d\n", *p);

    // Printing address of pointer p
    printf("Address of pointer p = %p\n", (void*)&p);

    printf("\n");

    // Printing value stored inside double pointer pp
    // pp contains address of pointer p
    printf("Value stored in double pointer pp = %p\n", (void*)pp);

    // *pp gives pointer p
    printf("Value of *pp = %p\n", (void*)*pp);

    // **pp gives value of i
    printf("Value of i using double pointer **pp = %d\n", **pp);

    // Printing address of double pointer pp
    printf("Address of double pointer pp = %p\n", (void*)&pp);

    return 0;
}