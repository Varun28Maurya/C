#include<stdio.h>


//Types of functions in C:
    //1. Library functions: These are built-in functions provided by the C standard library, such as printf(), scanf(), etc.
    //2. User-defined functions: These are functions that you create yourself to perform specific tasks in your program.

    int add(int a, int b) {
    return a + b;
}

int factorial(int n) {
    if (n == 0) {
        return 1; // Base case: factorial of 0 is 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}

int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int result = add(num1, num2);
    printf("The sum of %d and %d is: %d\n", num1, num2, result);

    //Recursion: A function that calls itself is known as a recursive function. It typically has a base case to prevent infinite recursion and a recursive case that breaks the problem into smaller subproblems.
    int n;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("The factorial of %d is: %d\n", n, fact);
    return 0;
}

