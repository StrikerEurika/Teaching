#include <stdio.h>

int main() {
    int x;
    printf("Enter x: ");
    scanf("%d", &x);

    if (x > 10) {
        printf("x > 10\n");
    }

    // 5 < x <= 10
    if (x > 5 && x <= 10) { 
        printf("5 < x <= 10\n");
    }

    // 0 < x <= 5
    if (x > 0 && x <= 5) {
        printf("0 < x <= 5\n");
    }
    return 0;
}
