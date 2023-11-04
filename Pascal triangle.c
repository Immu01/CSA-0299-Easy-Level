#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++) {
        int coef = 1;
        for (int space = 0; space < rows - i; space++) {
            printf("   ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%5d", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}
