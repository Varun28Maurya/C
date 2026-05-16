#include<stdio.h>
#include<string.h>
int main()
{
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }

    //Modifying the array
    a[2] = 10; // Changing the value at index 2 to
    printf("\nAfter modification:\n");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }

    //Calculating the size of the array
    int size = sizeof(a) / sizeof(a[0]);
    printf("\nSize of the array: %d\n", size);

    //Multi-dimensional array
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("Multi-dimensional array (matrix):\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Array of strings
    char names[3][20] = {"Alice", "Bob", "Charlie"};
    printf("Array of strings:\n");
    for(int i=0; i<3; i++){
        printf("%s\n", names[i]);
    }

    //String
    char str[20] = "Hello, World!";
    printf("String: %s\n", str);

    char str2[20] = "Welcome to C programming!";
    printf("String: %s\n", str2);

    char *str3 = "This is a string literal.";
    printf("String literal: %s\n", str3);

    char str4[] = "This is a string array.";
    printf("String array: %s\n", str4);

    // Modifying a string
    str4[0] = 't'; // Changing 'T' to 't'
    printf("Modified string array: %s\n", str4);

    // String concatenation
    char str5[40];
    strcpy(str5, str); // Copy str to str5
    strcat(str5, " "); // Concatenate a space
    strcat(str5, str2); // Concatenate str2 to str5
    printf("Concatenated string: %s\n", str5);

    // String length
    int length = strlen(str);
    printf("Length of string '%s': %d\n", str, length);

    // String comparison
    int cmp = strcmp(str, str2);
    if(cmp == 0){
        printf("Strings are equal.\n");
    } else if(cmp < 0){
        printf("String '%s' is less than '%s'.\n", str, str2);
    } else {
        printf("String '%s' is greater than '%s'.\n", str, str2);
    }

    // String copy
    char str6[20];
    strcpy(str6, str);
    printf("Copied string: %s\n", str6);
    // String tokenization
    char str7[40] = "Hello, World! Welcome to C programming.";
    char *token = strtok(str7, " ,.!"); // Tokenize based on space, comma, period, and exclamation mark
    printf("Tokens:\n");
    while(token != NULL){
        printf("%s\n", token);
        token = strtok(NULL, " ,.!"); // Get the next token
    }

    
    return 0;
}