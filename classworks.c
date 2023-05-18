#include <stdio.h>

int main() {
    // create two 2x2 matrices
    int matrix1[2][2] = { {1, 2}, {3, 4} };
    int matrix2[2][2] = { {5, 6}, {7, 8} };

    // create a result matrix to store the sum
    int result[2][2];

    // calculate the sum of the matrices
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // print the sum matrix
    printf("Sum of the matrices:\n");
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
