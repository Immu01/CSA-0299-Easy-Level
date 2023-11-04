#include <stdio.h>
int main ()
{
    int num , i ,a[10], odd_sum = 0 , even_sum = 0;
    printf("enter the no.of integers :");
    scanf("%d" , &num);
    printf("enter the integers :");
    for (i= 0 ; i < num ; i++)
    scanf ("%d" , &a[i]);
    for (i = 0 ; i < num ; i++){
        if (a[i] % 2 == 0)
        even_sum += a[i];
        else{
            odd_sum += a[i];}
        }
        printf("\n sum of all odd numbers is:%d ",odd_sum);
        printf("\n sum of all even numbers is:%d",even_sum);
    }