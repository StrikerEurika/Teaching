#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;
    
    int duplicateCount = 0;
    int nonDuplicateCount = 0;

    // Input 10 numbers from the user
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Find duplicate and non-duplicate elements
    for (int i = 0; i < 10; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < 10; j++) {
            if (i != j && arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (isDuplicate) {
            duplicateCount++;
        } else {
            nonDuplicateCount++;
        }
    }

    // Display the results
    printf("Sum of all elements: %d\n", sum);
    printf("Total number of duplicate elements: %d\n", duplicateCount);
    printf("Total number of non-duplicate elements: %d\n", nonDuplicateCount);

    return 0;
}