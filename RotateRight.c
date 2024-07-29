#include <stdio.h>

// Function to swap/exchange two numbers
void EXCHANGE(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

// Function to rotate first p2 elements of the array to the right by one position
void ROTATE_RIGHT(int *p1, int p2) {
    if (p2 <= 1) return; // No need to rotate if p2 is 1 or less

    // Store the last element of the first p2 elements
    int last = *(p1 + p2 - 1);

    // Shift elements to the right
    for (int i = p2 - 1; i > 0; i--) {
        EXCHANGE(p1 + i, p1 + i - 1);
    }

    // Place the last element at the first position
    *p1 = last;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int p2 = 5; // Number of elements to rotate

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    ROTATE_RIGHT(arr, p2);

    printf("Array after rotating first %d elements to the right by one position:\n", p2);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}