#include<stdio.h>
#include<string.h>
//struct User{
//    char name[20];
 //   int age;
//};

typedef struct User{
    char name[20];
    int age;
    float marks;
} Student;
int main()
{
    //struct User s1;
    //strcpy(s1.name, "Varun");
    //s1.age = 20;
    //printf("Name: %s\n", s1.name);
    //printf("Age: %d\n", s1.age);

    //Typedef struct

     int n, i;

    // Taking number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Creating array of Student structure
    Student s[n];

    // Input student details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        // Input name
        printf("Enter name: ");
        scanf("%s", s[i].name);

        // Input age
        printf("Enter age: ");
        scanf("%d", &s[i].age);

        // Input marks
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display student details
    printf("\n===== Student Details =====\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Name  : %s\n", s[i].name);
        printf("Age   : %d\n", s[i].age);
        printf("Marks : %.2f\n", s[i].marks);
    }
    

    return 0;
};