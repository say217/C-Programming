

#include <stdio.h>

#define ROW 3
#define COL 3

int main() {
    int A[ROW][COL], B[ROW][COL], result[ROW][COL];
    int i, j;

    // Taking input for the first matrix
    printf("Enter elements for the first 3x3 matrix:\n");
    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Taking input for the second matrix
    printf("Enter elements for the second 3x3 matrix:\n");
    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Adding the matrices
    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }

    // Displaying the result matrix
    printf("Resultant matrix after addition:\n");
    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
