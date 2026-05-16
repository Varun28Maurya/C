#include<stdio.h>
int main()
{

    //Types of Loops in C
    //A.Enttry controlled loops
    //1. For loop
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d ",i);
    }
    
    //2. While loop
    int j=0;
    while(j<5)
    {
        printf("%d ",j);
        j++;
    }

    //B.Exit controlled loops
    //1. Do-while loop
    int k=0;
    do
    {
        printf("%d ",k);
        k++;
    }while(k<5);

    //Nested loops
    int m,n;
    for(m=0;m<3;m++)
    {
        for(n=0;n<3;n++)
        {
            printf("%d ",n);
        }
        printf("\n");
    }

    //Goto statement
    int x=0;
    label:
        printf("%d ",x);
        x++;
        if(x<5)
        {
            goto label;
        }

    //Infinite loops
    //1. Using for loop
    //for(;;)
    //{
    //    printf("Infinite loop using for loop\n");
    //}

    //2. Using while loop
    //while(1)
    //{
    //    printf("Infinite loop using while loop\n");
    //}

    //3. Using do-while loop
    //do
    //{
    //    printf("Infinite loop using do-while loop\n");
    //}while(1);

    //4. Using goto statement
    //label:
    //    printf("Infinite loop using goto statement\n");
    //    goto label;


    return 0;
}