#include <stdio.h>

int main() {
    int age;
    char gender;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gender (m/f): ");
    scanf(" %c", &gender);

    if (age >= 18) {
        if (gender == 'm' || gender == 'f') {
            printf("You are eligible to vote.\n");
        } else {
            printf("Invalid gender.\n");
        }
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}
