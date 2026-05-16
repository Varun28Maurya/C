#include<stdio.h>

/*
    ============================================
                GLOBAL VARIABLE
    ============================================

    Global variables are declared outside functions.

    Scope:
        Accessible throughout the file.

    Lifetime:
        Entire program execution.

    Default value:
        0

*/

int globalVar;



/*
    ============================================
                EXTERN VARIABLE
    ============================================

    extern tells compiler:

        "This variable exists somewhere else."

    It does NOT create memory again.

*/

extern int globalVar;



/*
    ============================================
                STATIC FUNCTION
    ============================================

    static function can only be used
    inside this file.

*/

static void staticFunction()
{
    printf("This is a static function\n");
}



/*
    ============================================
                NORMAL FUNCTION
    ============================================

*/

void counter()
{

    /*
        ============================================
                    STATIC VARIABLE
        ============================================

        static variable keeps its value
        between function calls.

        Created only ONCE.

        Lifetime:
            Entire program execution.

        Scope:
            Only inside this function.

        Default value:
            0

    */

    static int count;

    count++;

    printf("Count = %d\n", count);
}



int main()
{

    /*
        ============================================
                    AUTO STORAGE CLASS
        ============================================

        auto is default for local variables.

        Stored in stack memory.

        Scope:
            Inside block/function only.

        Lifetime:
            Until function/block ends.

        Default value:
            Garbage value.

    */

    auto int a = 10;

    printf("====================================\n");
    printf("AUTO STORAGE CLASS\n");
    printf("====================================\n");

    printf("Value of a = %d\n", a);

    printf("\n");



    /*
        ============================================
                    REGISTER STORAGE CLASS
        ============================================

        register requests compiler
        to store variable in CPU register
        for faster access.

        Mostly used in loops.

        IMPORTANT:
        You cannot access address of
        register variable using &

        Example:
            &x  -> ERROR

    */

    printf("====================================\n");
    printf("REGISTER STORAGE CLASS\n");
    printf("====================================\n");

    register int i;

    for(i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }

    printf("\n\n");



    /*
        ============================================
                    STATIC STORAGE CLASS
        ============================================

        static variable remembers old value.

    */

    printf("====================================\n");
    printf("STATIC STORAGE CLASS\n");
    printf("====================================\n");

    counter();
    counter();
    counter();

    /*
        Output:
            Count = 1
            Count = 2
            Count = 3

        Because static variable
        is NOT destroyed after function ends.

    */

    printf("\n");



    /*
        ============================================
                    EXTERN STORAGE CLASS
        ============================================

        extern accesses global variable.

    */

    printf("====================================\n");
    printf("EXTERN STORAGE CLASS\n");
    printf("====================================\n");

    globalVar = 100;

    printf("Global Variable = %d\n", globalVar);

    printf("\n");



    /*
        ============================================
                    STATIC FUNCTION
        ============================================

    */

    printf("====================================\n");
    printf("STATIC FUNCTION\n");
    printf("====================================\n");

    staticFunction();

    printf("\n");



    /*
        ============================================
                    DEFAULT VALUES
        ============================================

    */

    printf("====================================\n");
    printf("DEFAULT VALUES\n");
    printf("====================================\n");

    static int s;
    int normal;

    printf("Static variable default value = %d\n", s);

    /*
        normal variable contains garbage value.

        Printing garbage value is unsafe.
        So we are not printing it.
    */

    printf("Normal variable contains garbage value\n");

    printf("\n");



    /*
        ============================================
                    MEMORY UNDERSTANDING
        ============================================

        STACK MEMORY:
            auto variables

        DATA SEGMENT:
            static/global variables

        CPU REGISTER:
            register variables

    */

    return 0;
}