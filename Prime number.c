#include<stdio.h>
int main ()
{
    int num ;
    printf("Enter a number :");
    scanf("%d" , &num);
    if((num %2 != 0 && num % 3 != 0 && num % 5 != 0 && num % 7 != 0 )){
        printf("\nThe given number is a prime number");
    }else{
        printf("\nThe given numerber is not a prime number");
    }
}