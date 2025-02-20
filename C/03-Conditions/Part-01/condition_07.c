#include <stdio.h>

// condition: if...else if...else
int main() {

    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    // condition
    if (x >= 100) {
        printf("x is greater than or equal 100\n");
    } else if (x > 50) {
        printf("x is greater than 50 but less than 100\n");
    } else {
        printf("x is less than 50\n");
    }
    return 0;
}