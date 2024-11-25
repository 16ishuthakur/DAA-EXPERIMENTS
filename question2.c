#include <stdio.h>

void insertElement(int arr[], int *n, int pos, int val) {
    for (int i = *n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = val;
    (*n)++;
}

void deleteElement(int arr[], int *n, int pos) {
    for (int i = pos; i < *n - 1; i++)
        arr[i] = arr[i + 1];
    (*n)--;
}

int main() {
    int n = 5, arr[100] = {1, 2, 3, 4, 5};
    insertElement(arr, &n, 2, 10);
    printf("After insertion: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    deleteElement(arr, &n, 3);
    printf("After deletion: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
