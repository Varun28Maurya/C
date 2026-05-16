#include<stdio.h>
#include "math.h"

/*
    ============================================
                MAIN FILE
    ============================================

*/

int main()
{

    printf("====================================\n");
    printf("MULTI FILE PROGRAMMING\n");
    printf("====================================\n");


    int a = 20;
    int b = 10;

    printf("Addition       = %d\n", add(a,b));

    printf("Subtraction    = %d\n", subtract(a,b));

    printf("Multiplication = %d\n", multiply(a,b));

    printf("Division       = %.2f\n", divide(a,b));

    return 0;
}