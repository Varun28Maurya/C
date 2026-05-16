#include<stdio.h>
int main()
{

    int a=10,b=20;
    //if-else condition
    if(a>b)
    {
        printf("a is greater than b");
    }
    else
    {
        printf("b is greater than a");
    }

    //nested if-else condition
    int marks=85;
    if(marks>=90)
    {
        printf("\nGrade: A");
    }
    else if(marks>=80)
    {
        printf("\nGrade: B");
    }
    else if(marks>=70)
    {
        printf("\nGrade: C");
    }
    else
    {
        printf("\nGrade: F");
    }

    //switch case condition
    int day=3;
    switch(day)
    {
        case 1:
            printf("\nMonday");
            break;
        case 2:
            printf("\nTuesday");
            break;
        case 3:
            printf("\nWednesday");
            break;
        case 4:
            printf("\nThursday");
            break;
        case 5:
            printf("\nFriday");
            break;
        case 6:
            printf("\nSaturday");
            break;
        case 7:
            printf("\nSunday");
            break;
        default:
            printf("\nInvalid day");
    }

    //else if ladder condition
    int num=15;
    if(num>0)
    {
        printf("\nPositive number");
    }
    else if(num<0)
    {
        printf("\nNegative number");
    }
    else
    {
        printf("\nZero");
    }
    return 0;
}