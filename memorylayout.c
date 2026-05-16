#include<stdio.h>
#include<stdlib.h>

/*
    ============================================
                GLOBAL VARIABLES
    ============================================

*/

/*
    Initialized global variable

    Stored in:
        DATA SEGMENT
*/

int globalInitialized = 100;


/*
    Uninitialized global variable

    Stored in:
        BSS SEGMENT
*/

int globalUninitialized;



/*
    ============================================
                STATIC VARIABLES
    ============================================

*/

/*
    Initialized static variable

    DATA SEGMENT
*/

static int staticInitialized = 200;


/*
    Uninitialized static variable

    BSS SEGMENT
*/

static int staticUninitialized;



/*
    ============================================
                FUNCTION
    ============================================

    Function code stored in:
        TEXT SEGMENT
*/

void display()
{
    printf("Inside display function\n");
}



int main()
{

    /*
        ============================================
                    STACK MEMORY
        ============================================

        Local variables stored in stack.
    */

    int localVar = 10;

    /*
        ============================================
                    HEAP MEMORY
        ============================================

        Dynamically allocated memory.
    */

    int *heapVar =
        (int*) malloc(sizeof(int));

    *heapVar = 500;



    printf("====================================\n");
    printf("MEMORY LAYOUT OF C PROGRAM\n");
    printf("====================================\n");


    /*
        ============================================
                    TEXT SEGMENT
        ============================================

        Stores executable instructions.
    */

    printf("\nTEXT SEGMENT\n");

    printf("Address of function display = %p\n",
           display);



    /*
        ============================================
                    DATA SEGMENT
        ============================================

        Initialized global/static variables.
    */

    printf("\nDATA SEGMENT\n");

    printf("Address of globalInitialized = %p\n",
           &globalInitialized);

    printf("Value = %d\n",
           globalInitialized);

    printf("\nAddress of staticInitialized = %p\n",
           &staticInitialized);

    printf("Value = %d\n",
           staticInitialized);



    /*
        ============================================
                    BSS SEGMENT
        ============================================

        Uninitialized global/static variables.
    */

    printf("\nBSS SEGMENT\n");

    printf("Address of globalUninitialized = %p\n",
           &globalUninitialized);

    printf("Value = %d\n",
           globalUninitialized);

    printf("\nAddress of staticUninitialized = %p\n",
           &staticUninitialized);

    printf("Value = %d\n",
           staticUninitialized);



    /*
        ============================================
                    STACK SEGMENT
        ============================================

        Local variables.
    */

    printf("\nSTACK SEGMENT\n");

    printf("Address of localVar = %p\n",
           &localVar);

    printf("Value = %d\n",
           localVar);



    /*
        ============================================
                    HEAP SEGMENT
        ============================================

        Dynamically allocated memory.
    */

    printf("\nHEAP SEGMENT\n");

    printf("Address stored in heapVar = %p\n",
           heapVar);

    printf("Value = %d\n",
           *heapVar);



    /*
        ============================================
                    MEMORY DIRECTION
        ============================================

        STACK grows downward.

        HEAP grows upward.

    */

    printf("\n====================================\n");
    printf("MEMORY UNDERSTANDING\n");
    printf("====================================\n");

    printf("Stack memory usually grows DOWN\n");

    printf("Heap memory usually grows UP\n");



    /*
        ============================================
                    FREE HEAP MEMORY
        ============================================

    */

    free(heapVar);

    return 0;
}