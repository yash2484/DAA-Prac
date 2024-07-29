#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10 // Size of the array

// Function to find the maximum value in an array
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to find the minimum value in an array
int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int numbers[SIZE];
    srand(time(NULL)); // Seed for random number generation
    
    // Generate random numbers and populate the array
    printf("Generated array:\n");
    for (int i = 0; i < SIZE; i++) {
        numbers[i] = rand() % 100; // Generate random numbers between 0 and 99
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    // Find maximum and minimum values
    int max = findMax(numbers, SIZE);
    int min = findMin(numbers, SIZE);
    
    // Print results
    printf("Maximum value in the array: %d\n", max);
    printf("Minimum value in the array: %d\n", min);
    
    return 0;
}