#include <stdio.h>

int countNonZero(int arr[][3], int rows, int cols) {
    int count = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (arr[i][j] != 0)
                count++;
    return count;
}

int main() {
    int arr[3][3] = {{1, 0, 3}, {0, 5, 6}, {7, 8, 0}};
    int rows = 3, cols = 3;

    printf("Number of nonzero elements: %d\n", countNonZero(arr, rows, cols));
    return 0;
}
