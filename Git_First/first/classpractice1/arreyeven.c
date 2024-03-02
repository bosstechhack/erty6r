#include <stdio.h>

// Function to count even numbers in an array
int countEvenNumbers(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;

    // Prompt the user to enter the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the countEvenNumbers function to count even numbers
    int evenCount = countEvenNumbers(arr, n);

    // Display the result
    printf("Total number of even numbers in the array: %d\n", evenCount);

    return 0;
}