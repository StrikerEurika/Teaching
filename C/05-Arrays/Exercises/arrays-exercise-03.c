#include <stdio.h>

int main() {
    int evenNumbers[50];
    int index = 0;

    // input the values into the array  
    for (int i = 2; i <= 100; i += 2) {
        evenNumbers[index] = i;
        index++;
    }


    // Print the even numbers to verify
    for (int i = 0; i < 50; i++) {
        printf("%d ", evenNumbers[i]);
    }

    return 0;
}