#include<stdio.h>
enum val{
    n1= 10,
    n2= 20,
    n3= 30
    //0 1 2 by default
};
int main() {
    int number = n2;
    printf("The value of number is: %d\n", number);
    enum val myVal = n1;
    printf("The value of myVal is: %d\n", myVal);
    return 0;
};
