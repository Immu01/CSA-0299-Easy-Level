#include <stdio.h>
int factorial(int n) 
{
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("The factorial of %d is %d\n", n, factorial(n));
}