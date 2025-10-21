// WAP to read a matrix of 3*4 and find the sum of even and odd elements in the matrix
#include <stdio.h>
int main() {
    int matrix[3][4];
    int i, j;
    int evenSum = 0, oddSum = 0;

    printf("Enter elements of 3x4 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            if(matrix[i][j] % 2 == 0) {
                evenSum += matrix[i][j];
            } else {
                oddSum += matrix[i][j];
            }
        }
    }

    printf("Sum of even elements in the matrix: %d\n", evenSum);
    printf("Sum of odd elements in the matrix: %d\n", oddSum);

    return 0;
}