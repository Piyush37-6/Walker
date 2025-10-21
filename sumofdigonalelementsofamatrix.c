//WAP to read a matrix of size n*n and find the sum of diagonal elements

#include <stdio.h>

int main() {
    int n, i, j;
    int sumPrimary = 0, sumSecondary = 0;

    printf("Enter the size of the matrix (n x n):\n");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size\n");
        return 1;
    }

    int matrix[n][n]; // declare after n is read

    printf("Enter elements of %dx%d matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sumPrimary += matrix[i][i];
        sumSecondary += matrix[i][n - i - 1];
    }

    printf("Sum of primary diagonal elements: %d\n", sumPrimary);
    printf("Sum of secondary diagonal elements: %d\n", sumSecondary);

    return 0;
}