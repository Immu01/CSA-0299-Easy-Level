#include<stdio.h>
int main ()
{
    int num1 , num2;
    printf("Enter two numbers :");
    scanf("%d %d" , &num1 , &num2);
    if (num1 == num2){
        printf("The given two numbers are equal");
    }else{
        printf("The given numbers are not equal");
    }
}