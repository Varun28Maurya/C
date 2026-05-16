#include <stdio.h>

int main()

{

    int a = 10; // Variable declaration and initialization

    printf("The value of a is: %d\n", a); // Output the value of a
    printf("The value of a is: %i\n", a); // Output the value of a
    printf("The size of a is: %d bytes\n", sizeof(a)); // Output the size of a in bytes
    printf("The address of a is: %p\n", (void*)&a); // Output the memory address of a
    printf("The value of a in hexadecimal is: %x\n", a); // Output the value of a in hexadecimal format
    printf("The value of a in octal is: %o\n", a); // Output the value of a in octal format

    a = 20; // Variable reassignment

    printf("The new value of a is: %d\n", a); // Output the new value of a

    float b = 3.14;                         // Variable declaration and initialization for a float
    printf("The value of b is: %.2f\n", b); // Output the value of b with 2 decimal places

    char c = 'A';                         // Variable declaration and initialization for a char
    printf("The value of c is: %c\n", c); // Output the value of c

    long d = 100000L;                         // Variable declaration and initialization for a long integer
    printf("The value of d is: %ld\n", d); // Output the value of d

    double e = 3.14159;                         // Variable declaration and initialization for a double
    printf("The value of e is: %.5lf\n", e); // Output the

    //1byte=8bits
    //1bit can store 2 values (0 and 1)
    //1byte can store 256 values (2^8)

    // Data Types in C:
    // C is a statically typed language, which means that every variable must be declared with a specific data type. The data types in C can be categorized into three main types:
    // A.Primitive Data Types:
    // 1. int: Used for integers (e.g., 10, -5)
    // 2. float: Used for floating-point numbers (e.g., 3.14)
    // 3. char: Used for single characters (e.g., 'A', 'B')
    // 4. double: Used for double-precision floating-point numbers (e.g., 3.14159)
    // 5. void: Used to indicate that a function does not return a value (e.g., void myFunction() { /* code */ })
    // 6. _Bool: Used for boolean values (e.g., true, false)
    // 7. long: Used for long integers (e.g., 100000L)
    // 8. short: Used for short integers (e.g., 10000)
    // 9. unsigned: Used for unsigned integers (e.g., 255U)
    // 10. signed: Used for signed integers (e.g., -128 to 127)
    // 11. long long: Used for long long integers (e.g., 10000000000LL)
    // 12. long double: Used for extended precision floating-point numbers (e.g., 3.1415926535897932384626433832795L)

    // B. Derived Data Types:
    // 1. Arrays: Used to store multiple values of the same type (e.g., int arr[5];)
    // 2. Pointers: Used to store memory addresses (e.g., int *ptr;)
    // 3.Functions: Used to group a set of statements together to perform a specific task (e.g., void myFunction() { /* code */ })

    // User Defined Data Types:
    // 1. Structures: Used to group different types of variables together (e.g., struct Person { char name[50]; int age; };)
    // 2. Unions: Similar to structures but with shared memory (e.g., union
    // 3. Enums: Used to define a set of named integer constants (e.g., enum Color { RED, GREEN, BLUE };)

    //Escape Sequences in C:
    // Escape sequences are special characters that are used to represent certain characters in a string. They are denoted by a backslash (\) followed by a specific character. Some common escape sequences in C include:

    // \n: Newline - Moves the cursor to the next line
    printf("Hello, World!\n"); // Output "Hello, World!" followed by a newline
    // \t: Horizontal Tab - Moves the cursor to the next tab stop
    printf("Hello,\tWorld!\n"); // Output "Hello," followed by a tab and then "World!"
    // \r: Carriage Return - Moves the cursor to the beginning of the line 
    printf("Hello, World!\rHi!\n"); // Output "Hi!" followed by a newline, overwriting "Hello, World!"
    // \": Double Quote - Represents a double quote character
    printf("She said, \"Hello!\"\n"); // Output "She said, "Hello!""
    // \': Single Quote - Represents a single quote character
    printf("It\'s a nice day!\n"); // Output "It's a nice day!"
    // \\: Backslash - Represents a backslash character
    printf("This is a backslash: \\\n"); // Output "This is a backslash: \"
    // \0: Null Character - Represents the end of a string
    printf("This is a null character: %c\n", '\0'); // Output "This is a null character: "
    // \b: Backspace - Moves the cursor to the previous character
    printf("This is a backspace: %c\n", '\b'); // Output "This is a backspace: "
    // \f: Form Feed - Moves the cursor to the next page
    printf("This is a form feed: %c\n", '\f'); // Output "This is a form feed: "
    // \v: Vertical Tab - Moves the cursor to the next vertical tab stop
    printf("This is a vertical tab: %c\n", '\v'); // Output "This is a vertical tab: "


    //This is a single-line comment in C
    /*
     This is a multi-line comment in C
     It can span multiple lines
     */

     //Input in C:  
    int num; // Variable declaration for an integer
    printf("Enter an integer: "); // Prompt the user for input
    scanf("%d", &num); // Read an integer from the user and store it in the variable num
    char ch; // Variable declaration for a character
    printf("Enter a character: "); // Prompt the user for input
    scanf(" %c", &ch); // Read a character from the user and store it in the variable ch
    printf("You entered: %d\n", num); // Output the value entered by the user
    printf("You entered: %c\n", ch); // Output the character entered by the user

    //Conversion types in C:    
    //1.Implicit Conversion: This occurs when the compiler automatically converts one data type to another. For example, when an integer is assigned to a float variable, the integer is implicitly converted to a float.
    int x = 10; // Integer variable
    float y = x; // Implicit conversion from int to float
    printf("The value of y is: %.2f\n", y); // Output the

    //2.Explicit Conversion: This occurs when the programmer explicitly converts one data type to another using a cast operator. For example, when a float is assigned to an integer variable, the float is explicitly converted to an integer.
    float a1 = 3.14; // Float variable
    int b1 = (int)a1; // Explicit conversion from float to int using a
    printf("The value of b1 is: %d\n", b1); // Output the value of b1, which is the integer part of a1

    return 0; // Return statement indicating successful execution
}