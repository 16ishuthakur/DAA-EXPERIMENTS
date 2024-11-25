#include <stdio.h>

int main() {
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rowSum, colSum;
    
    for (int i = 0; i < 3; i++) {
        rowSum = colSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += mat[i][j];
            colSum += mat[j][i];
        }
        printf("Row %d sum = %d, Column %d sum = %d\n", i + 1, rowSum, i + 1, colSum);
    }
    return 0;
}
