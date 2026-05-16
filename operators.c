#include <stdio.h>

int main() {
    int a = 10, b = 5;

    // Arithmetic operators
    printf("a + b = %d\n", a + b); // Addition
    printf("a - b = %d\n", a - b); // Subtraction
    printf("a * b = %d\n", a * b); // Multiplication
    printf("a / b = %d\n", a / b); // Division
    printf("a %% b = %d\n", a % b); // Modulus
    printf("a++ = %d\n", a++); // Post-increment
    printf("++b = %d\n", ++b); // Pre-increment

    // Relational operators
    printf("a == b: %d\n", a == b); // Equal to
    printf("a != b: %d\n", a != b); // Not equal to
    printf("a > b: %d\n", a > b);   // Greater than
    printf("a < b: %d\n", a < b);   // Less than
    printf("a >= b: %d\n", a >= b); // Greater than or equal to
    printf("a <= b: %d\n", a <= b); // Less than or equal to

    // Logical operators
    int x = 1, y = 0;
    printf("x && y: %d\n", x && y); // Logical AND
    printf("x || y: %d\n", x || y); // Logical OR
    printf("!x: %d\n", !x);         // Logical NOT

    // Assignment operators
    int c = 10;
    printf("c = %d\n", c); // Assign value
    c += 5; // Add and assign
    printf("c += 5: %d\n", c);
    c -= 3; // Subtract and assign
    printf("c -= 3: %d\n", c);
    c *= 2; // Multiply and assign
    printf("c *= 2: %d\n", c);
    c /= 4; // Divide and assign
    printf("c /= 4: %d\n", c);
    c %= 3; // Modulus and assign
    printf("c %%= 3: %d\n", c);

    // Bitwise operators
    int d = 5; // 0101 in binary
    printf("d & 3: %d\n", d & 3); // Bit
    printf("d | 3: %d\n", d | 3); // Bitwise OR
    printf("d ^ 3: %d\n", d ^ 3); // Bitwise XOR
    printf("~d: %d\n", ~d); // Bitwise NOT
    printf("d << 1: %d\n", d << 1); // Left shift
    printf("d >> 1: %d\n", d >> 1); // Right shift

    // Ternary operator
    int max = (a > b) ? a : b; // Ternary operator

    // Comma operator
    int e = (a++, b++); // Comma operator
    //Working of comma operator: The comma operator evaluates both a++ and b++, but only the result of b++ is assigned to e. After this line, a will be 11, b will be 6, and e will be 5 (the original value of b before incrementing).
    //It makes the difference between operators and expressions.
    printf("e: %d, a: %d, b: %d\n", e, a, b);

    // sizeof operator
    printf("Size of int: %zu bytes\n", sizeof(int)); // Size of int

    // Typecast operator
    double f = 3.14;
    int g = (int)f; // Typecast double to int
    printf("g: %d\n", g);

    // Pointer operators
    int *ptr = &a; // Address-of operator
    printf("Value at ptr: %d\n", *ptr); // Dereference operator

    return 0;
}