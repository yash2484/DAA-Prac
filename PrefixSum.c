#include <stdio.h>

void calculatePrefixSum(int arr[], int prefixSum[], int N) {
    prefixSum[0] = arr[0];

    for (int i = 1; i < N; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
}

int main() {
    int N;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];
    int prefixSum[N];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    calculatePrefixSum(arr, prefixSum, N);

    printf("Prefix Sum Array:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", prefixSum[i]);
    }

    return 0;
}