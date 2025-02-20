#include <stdio.h>

// condition: if...else
int main() {

    int a;
    int b;
    printf("Enter a: "); scanf("%d", &a);
    printf("Enter b: "); scanf("%d", &b);

    // condition
    if (a > b) {
        printf("a is greater than b\n");
    }
    else {
        printf("a is not greater than b\n");
    }

    // end of condition
    printf("Hello\n");

    return 0;
}