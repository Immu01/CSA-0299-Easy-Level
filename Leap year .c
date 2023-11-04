#include<stdio.h>
int main ()
{
    int num;
    printf("enter the year :");
    scanf("%d" , &num );
    if ((num % 4 == 0 && num %100 != 0)||(num % 400 == 0))
    printf("the given year %d is a leap year %d .\n" , num );
    else{
            printf("the given year %d is non leap year .\n" , num );

    }
}