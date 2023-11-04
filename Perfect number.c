#include<stdio.h>
int main() 
{
    int i , number , sum = 0 ;
    printf("Enter the number :");
    scanf("%d" , &number);
    for(i = 1 ; i < number ; i++){
        if (number % i == 0)
        sum = sum + i ;
    } if ( sum == number)
    printf("The given number %d is a perfect number " , sum);
    else{
        printf("The given number %d is not a perfect number " , sum);
    }
}