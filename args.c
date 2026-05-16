#include<stdio.h>
#include<stdlib.h>

/*
    ============================================
            COMMAND LINE ARGUMENTS IN C
    ============================================

    Syntax of main function:

        int main(int argc, char *argv[])

    argc  -> Argument Count
    argv  -> Argument Vector

    argc stores total number of command line arguments.

    argv stores all arguments as STRINGS.

    IMPORTANT:
    argv[0] always stores the program name itself.

    Example run:

        ./program Varun 20 Mumbai

    Then internally:

        argc = 4

        argv[0] = ./program
        argv[1] = Varun
        argv[2] = 20
        argv[3] = Mumbai

*/


int main(int argc, char *argv[])
{

    /*
        ============================================
                PRINTING TOTAL ARGUMENTS
        ============================================

        argc tells how many arguments are present.

        Even if no extra argument is given,
        argc will still be 1 because
        the program name itself counts.

    */

    printf("====================================\n");
    printf("TOTAL ARGUMENTS\n");
    printf("====================================\n");

    printf("argc = %d\n\n", argc);



    /*
        ============================================
                PRINTING ALL ARGUMENTS
        ============================================

        argv is an array of strings.

        argv[0] -> program name
        argv[1] -> first argument
        argv[2] -> second argument
        and so on...

    */

    printf("====================================\n");
    printf("PRINTING ALL ARGUMENTS\n");
    printf("====================================\n");

    int i;

    for(i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    printf("\n");



    /*
        ============================================
                IMPORTANT CONCEPT
        ============================================

        EVERYTHING COMES AS STRING

        Even if user enters numbers:

            ./program 10 20

        argv[1] = "10"
        argv[2] = "20"

        These are STRINGS not integers.

        So we use atoi() to convert string to int.

        atoi means:
            ASCII to Integer

    */



    /*
        ============================================
                SAFETY CHECK
        ============================================

        Before accessing argv[1], argv[2], etc
        we should first check argc.

        Otherwise program may crash.

        Example:

            ./program

        Here only argv[0] exists.

        argv[1] does NOT exist.

    */

    printf("====================================\n");
    printf("SAFETY CHECK\n");
    printf("====================================\n");

    if(argc < 3)
    {
        printf("Please provide at least 2 numbers.\n");

        printf("\nExample:\n");
        printf("./program 10 20\n");

        return 1;
    }

    printf("Enough arguments provided.\n\n");



    /*
        ============================================
                STRING TO INTEGER
        ============================================

        atoi() converts string into integer.

        Syntax:

            int variable = atoi(string);

        Example:

            atoi("10") -> 10

    */

    printf("====================================\n");
    printf("STRING TO INTEGER CONVERSION\n");
    printf("====================================\n");

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf("First Number  = %d\n", a);
    printf("Second Number = %d\n", b);

    printf("\n");



    /*
        ============================================
                ADDITION OF NUMBERS
        ============================================

    */

    printf("====================================\n");
    printf("ADDITION\n");
    printf("====================================\n");

    int sum = a + b;

    printf("%d + %d = %d\n", a, b, sum);

    printf("\n");



    /*
        ============================================
                PRINTING ARGUMENTS IN REVERSE
        ============================================

    */

    printf("====================================\n");
    printf("ARGUMENTS IN REVERSE\n");
    printf("====================================\n");

    for(i = argc - 1; i >= 0; i--)
    {
        printf("%s\n", argv[i]);
    }

    printf("\n");



    /*
        ============================================
                BIGGEST NUMBER
        ============================================

        We will compare first 2 numbers.

    */

    printf("====================================\n");
    printf("BIGGEST NUMBER\n");
    printf("====================================\n");

    if(a > b)
    {
        printf("%d is greater\n", a);
    }
    else if(b > a)
    {
        printf("%d is greater\n", b);
    }
    else
    {
        printf("Both are equal\n");
    }

    printf("\n");



    /*
        ============================================
                MEMORY UNDERSTANDING
        ============================================

        argv is actually an array of pointers.

        Each pointer points to a string.

        Example:

            ./program hello world

        Internally:

            argv
             |
             |----> argv[0] -> "./program"
             |----> argv[1] -> "hello"
             |----> argv[2] -> "world"

    */



    /*
        ============================================
                WHY char *argv[] ?
        ============================================

        Because:

        A string in C is:

            char *

        Since there are multiple strings:

            char *argv[]

        Meaning:

            Array of character pointers

    */



    /*
        ============================================
                RETURN VALUE
        ============================================

        return 0 means successful execution.

        return 1 usually means error.

    */

    return 0;
}