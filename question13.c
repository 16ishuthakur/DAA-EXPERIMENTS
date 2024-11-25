#include <stdio.h>
#include <limits.h>

void interchange(int arr[], int n) {
    int largest = INT_MIN, secondLargest = INT_MIN;
    int smallest = INT_MAX, secondSmallest = INT_MAX;
    int *slPos, *ssPos;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
            slPos = &arr[i - 1];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
            slPos = &arr[i];
        }

        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
            ssPos = &arr[i - 1];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
            ssPos = &arr[i];
        }
    }

    int temp = *slPos;
    *slPos = *ssPos;
    *ssPos = temp;

    printf("Array after interchange: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    interchange(arr, n);
    return 0;
}
