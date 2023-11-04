#include<stdio.h>
int main ()
{
    int num , original_num , digit , sum = 0;
    printf("enter the number :");
    scanf("%d" , &num );
    original_num = num ;
    while ( num != 0){
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("the sum of digits of %d is: %d" ,original_num , sum);
}