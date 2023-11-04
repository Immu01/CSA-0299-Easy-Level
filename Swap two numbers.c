#include<stdio.h>
int main ()
{
    int num1 , num2 , temp;
    printf("enter two numbers :");
    scanf("%d %d" , &num1 , &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("first number %d.\n" , num1);
    printf("second number %d.\n" , num2);
}