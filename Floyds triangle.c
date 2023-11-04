#include<stdio.h>
void main ()
{
    int n , i , j , k=1 ;
    printf("enter the no.of rows :");
    scanf("%d" , &n);
    for (i = 1 ; i <= n ; i++){
        for (j = 1 ; j <= i ; j++)
        {
            printf("%5d" , k++);
        } printf("\n");
    } 
}