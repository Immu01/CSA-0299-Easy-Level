#include<stdio.h>
int main ()
{
    int start , end , count = 0 , i ;
    printf("enter the range from starting to ending :");
    scanf("%d %d" , &start , &end);
    for (i = start ; i <= end ; i++){
        if (i % 5 == 0){
            count++;
        }
    }
    printf("the integers divisible by 5 from %d tp %d are : %d\n" , start , end , count);
}