#include <stdio.h>

int main() {
    int arr[] = {34, 23, 12, 45, 9, 1, 99, 87};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    int found = -1; // Initialize found to -1 to indicate not found

    printf("Enter the number you want to search for: ");
    scanf("%d", &target);

    // Perform linear search
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = i; // Store the index where the target is found
            break;     // Exit the loop once the target is found
        }
    }

    if (found != -1) {
        printf("Element found at index %d\n", found);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
