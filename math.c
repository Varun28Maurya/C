#include<stdio.h>
#include "math.h"

/*
    ============================================
                FUNCTION DEFINITIONS
    ============================================

*/

int add(int a, int b)
{
    return a + b;
}


int subtract(int a, int b)
{
    return a - b;
}


int multiply(int a, int b)
{
    return a * b;
}


float divide(float a, float b)
{
    if(b == 0)
    {
        printf("Division by zero not possible\n");
        return 0;
    }

    return a / b;
}