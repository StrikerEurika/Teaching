#include <stdio.h>

int main() {
    float numbers[10];
    float sum = 0;

    // Get 10 numbers from the user
    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }

    // Calculate the sum of all elements in the array
    for(int i = 0; i < 10; i++) {
        sum += numbers[i];
    }

    // Display the result
    printf("The sum of all elements in the array is: %.2f\n", sum);

    return 0;
}