// WPA to read a matrix of 4*4 and find the smallest and largest element in the matrix
#include <stdio.h>  
int main() {  
    int matrix[4][4];  
    int i, j;  
    int smallest, largest;  
    
    printf("Enter elements of 4x4 matrix:\n");  
    for(i = 0; i < 4; i++) {  
        for(j = 0; j < 4; j++) {  
            scanf("%d", &matrix[i][j]);  
        }  
    }  
    
    smallest = matrix[0][0];  
    largest = matrix[0][0];  
    
    for(i = 0; i < 4; i++) {  
        for(j = 0; j < 4; j++) {  
            if(matrix[i][j] < smallest) {  
                smallest = matrix[i][j];  
            }  
            if(matrix[i][j] > largest) {  
                largest = matrix[i][j];  
            }  
        }  
    }  
    
    printf("Smallest element in the matrix: %d\n", smallest);  
    printf("Largest element in the matrix: %d\n", largest);  
    
    return 0;  
}