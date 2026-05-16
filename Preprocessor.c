#include<stdio.h>

/*
    ============================================
                #define
    ============================================

    Used to create constants/macros.

    Syntax:

        #define NAME value

*/

#define PI 3.14159
#define NAME "Varun"


/*
    ============================================
                MACRO WITH PARAMETERS
    ============================================

    Works like inline function.

*/

#define SQUARE(x) ((x) * (x))
#define ADD(a,b) ((a) + (b))


/*
    ============================================
                CONDITIONAL COMPILATION
    ============================================

    #ifdef
    #ifndef
    #if
    #else
    #elif
    #endif

*/

#define DEBUG


/*
    ============================================
                #undef
    ============================================

    Removes macro definition.

*/

#define TEMP 100
#undef TEMP


/*
    ============================================
                GLOBAL MACRO
    ============================================

*/

#define MESSAGE "Welcome to Preprocessor Directives"


int main()
{

    /*
        ============================================
                    #define CONSTANTS
        ============================================

    */

    printf("====================================\n");
    printf("#define CONSTANTS\n");
    printf("====================================\n");

    printf("Value of PI = %.2f\n", PI);
    printf("Name = %s\n", NAME);

    printf("\n");



    /*
        ============================================
                    MACROS WITH PARAMETERS
        ============================================

    */

    printf("====================================\n");
    printf("MACROS WITH PARAMETERS\n");
    printf("====================================\n");

    int num = 5;

    printf("Square of %d = %d\n", num, SQUARE(num));

    printf("Addition = %d\n", ADD(10, 20));

    printf("\n");



    /*
        ============================================
                    #ifdef
        ============================================

        If macro exists,
        this block compiles.

    */

    printf("====================================\n");
    printf("#ifdef\n");
    printf("====================================\n");

#ifdef DEBUG

    printf("DEBUG mode is ON\n");

#endif

    printf("\n");



    /*
        ============================================
                    #ifndef
        ============================================

        If macro does NOT exist,
        this block compiles.

    */

    printf("====================================\n");
    printf("#ifndef\n");
    printf("====================================\n");

#ifndef TEST

    printf("TEST macro does not exist\n");

#endif

    printf("\n");



    /*
        ============================================
                    #if #else #elif
        ============================================

    */

    printf("====================================\n");
    printf("#if #else #elif\n");
    printf("====================================\n");

#define VALUE 10

#if VALUE > 5

    printf("VALUE is greater than 5\n");

#elif VALUE == 5

    printf("VALUE is 5\n");

#else

    printf("VALUE is less than 5\n");

#endif

    printf("\n");



    /*
        ============================================
                    #undef
        ============================================

        TEMP was removed.

    */

    printf("====================================\n");
    printf("#undef\n");
    printf("====================================\n");

#ifdef TEMP

    printf("TEMP exists\n");

#else

    printf("TEMP macro removed using #undef\n");

#endif

    printf("\n");



    /*
        ============================================
                    BUILT IN MACROS
        ============================================

        Provided automatically by compiler.

    */

    printf("====================================\n");
    printf("BUILT IN MACROS\n");
    printf("====================================\n");

    printf("Current File : %s\n", __FILE__);
    printf("Current Date : %s\n", __DATE__);
    printf("Current Time : %s\n", __TIME__);
    printf("Current Line : %d\n", __LINE__);

    printf("\n");



    /*
        ============================================
                    MESSAGE MACRO
        ============================================

    */

    printf("====================================\n");
    printf("MESSAGE MACRO\n");
    printf("====================================\n");

    printf("%s\n", MESSAGE);

    printf("\n");



    /*
        ============================================
                    IMPORTANT NOTE
        ============================================

        Macros are NOT functions.

        They are simple text replacement.

    */

    return 0;
}