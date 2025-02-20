#include <stdio.h>

// condition: if...else if...else
int main() {

    int x;
    printf("Enter x: ");
    scanf("%d", &x);

    // condition
    if (x > 0) {
        printf("x is greater than zero\n");
    } else if (x < 0) {
        printf("x is less than zero\n");
    } else {
        printf("x is equal to zero\n");
    }

    return 0;
}