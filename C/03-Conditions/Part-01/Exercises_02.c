#include <stdio.h>

int main() {
    
    char inputChar;
    printf("Enter a character: ");
    scanf(" %c", &inputChar);

    // get ASCII value
    int asciiValue = (int) inputChar;

    if (asciiValue >= 48 && asciiValue <= 57) {
        printf("The character is a number.\n");
    } else if (asciiValue >= 65 && asciiValue <= 90) {
        printf("The character is an uppercase letter.\n");
    } else if (asciiValue >= 97 && asciiValue <= 122) {
        printf("The character is a lowercase letter.\n");
    } else {
        printf("It is not a number nor a letter.\n");
    }


    return 0;
}
