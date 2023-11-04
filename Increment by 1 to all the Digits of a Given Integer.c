#include <stdio.h>
int main() 
{
    int num, originalNum, newNum = 0;
    int placeValue = 1;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (num > 0) {
        int digit = num % 10; 
        digit = (digit + 1) % 10; 
        newNum += digit * placeValue;
        placeValue *= 10;
        num /= 10;
    }
    printf("Original number: %d\n", originalNum);
    printf("Number with each digit incremented by 1: %d\n", newNum);
}
