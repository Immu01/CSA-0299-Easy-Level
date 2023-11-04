#include <stdio.h>
int main() {
    int constant;
    printf("Enter the number for multiplication table : ");
    scanf("%d", &constant);
    printf("Multiplication Table for %d:\n", constant);
    printf("-----------------------------\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d x %2d = %2d\n", constant, i, constant * i);
    }
}
