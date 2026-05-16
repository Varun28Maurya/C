#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char name[50];
    int age;

    // ==============================
    // WRITING INTO FILE
    // ==============================

    /*
        fopen("filename", "mode");

        Modes:
        "w"  -> Write
        "r"  -> Read
        "a"  -> Append

        Here:
        "w" creates file if it does not exist.
        If file exists, old data is erased.
    */

    fp = fopen("student.txt", "w");

    // Checking if file opened successfully
    if(fp == NULL)
    {
        printf("File cannot be opened!\n");
        return 1;
    }

    // Taking input from user
    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    // Writing data into file
    fprintf(fp, "Student Name: %s\n", name);
    fprintf(fp, "Student Age : %d\n", age);

    printf("\nData written successfully into file.\n");

    // Closing file
    fclose(fp);


    // ==============================
    // READING FROM FILE
    // ==============================

    /*
        "r" mode is used for reading.
    */

    fp = fopen("student.txt", "r");

    // Checking file
    if(fp == NULL)
    {
        printf("File cannot be opened for reading!\n");
        return 1;
    }

    char ch;

    printf("\nReading data from file:\n\n");

    // Reading character by character
    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    // Closing file
    fclose(fp);


    // ==============================
    // APPENDING INTO FILE
    // ==============================

    /*
        "a" mode adds new data
        without deleting old data.
    */

    fp = fopen("student.txt", "a");

    if(fp == NULL)
    {
        printf("File cannot be opened for appending!\n");
        return 1;
    }

    // Appending new data
    fprintf(fp, "\nThis data is appended later.");

    printf("\n\nNew data appended successfully.\n");

    // Closing file
    fclose(fp);

    return 0;
}