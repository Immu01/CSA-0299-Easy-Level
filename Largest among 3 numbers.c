#include<stdio.h>
int main ()
{
    int num , a , b , c ;
    printf("enter three numbers :");
    scanf("%d %d %d" , &a , &b , &c);
    int largest = a;
    if (b > largest){
        largest = b;
    }
    if (c > largest){
        largest = c;
    }
    printf("%d is the largest among 3 numbers" , largest);
}