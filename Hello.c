#include <stdio.h>
//stdio.h is a header file in the C standard library that provides input and output functions. It includes functions for reading from and writing to the console, files, and other input/output streams. The most commonly used functions from stdio.h include printf() for output and scanf() for input.
//In C, the main() function is the entry point of the program. It is where the execution of the program begins. The main() function typically returns an integer value, which indicates the success or failure of the program. A return value of 0 usually indicates that the program executed successfully, while a non-zero value indicates an error or abnormal termination.
//Int main() is the standard signature for the main function in C. It indicates that the function returns an integer value, which is typically used to indicate the exit status of the program. The main function can also take arguments, such as command-line arguments, but in this case, it does not take any parameters.
#define PI 3.14
#define NUM 100
//In C, #define is a preprocessor directive used to define constants or macros. It
int main() {

    //This is comment
    /*  This is a multi-line comment */
    printf("Hello, World!\n");
    printf("Value of PI: %.2f\n", PI);
    printf("Value of NUM: %d\n", NUM);
    return 0;

    //return 0; is used to indicate that the program has executed successfully. It is a common convention in C programming to return 0 from the main function to signal that the program has completed without errors. If a non-zero value is returned, it typically indicates that an error occurred during the execution of the program.
}