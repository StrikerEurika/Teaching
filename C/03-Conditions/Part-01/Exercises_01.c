#include <stdio.h>

int main() {
    int score;

    printf("Enter your score: ");
    scanf("%d", &score);

    if (score >= 90) {
        printf("You got grade A\n");
    } else if (score >= 80) {
        printf("You got grade B\n");
    } else if (score >= 70) {
        printf("You got grade C\n");
    } else if (score >= 60) {
        printf("You got grade D\n");
    } else {
        printf("You got grade F\n");
    }

    return 0;
}
