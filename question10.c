#include <stdio.h>

void rearrange(int arr[], int n) {
    int temp[n];
    int left = 0, right = n - 1, flag = 1;

    for (int i = 0; i < n; i++) {
        if (flag)
            temp[i] = arr[right--];
        else
            temp[i] = arr[left++];
        flag = !flag;
    }

    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);
    printf("Rearranged array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
