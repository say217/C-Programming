
#include <stdio.h>

#define ROW 3
#define COL 3

int main() {
    int A[ROW][COL], B[ROW][COL], result[ROW][COL];
    int i, j, k;

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

    // Initializing result matrix to 0
    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
            result[i][j] = 0;
        }
    }

    // Multiplying the matrices
    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
            for(k = 0; k < COL; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Displaying the result matrix
    printf("Resultant matrix after multiplication:\n");
    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
