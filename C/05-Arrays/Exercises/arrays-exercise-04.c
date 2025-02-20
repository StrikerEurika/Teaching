#include <stdio.h>

int main(void) {
    char names[10][50];

    // input
    printf("Enter 10 names\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter name %d: ", i + 1); scanf("%s", names[i]);
    }

    // ouput
    printf("Print the names\n");
    for (int i = 0; i < 10; i++) {
        printf("Name %d: %s\n", i + 1, names[i]);
    }
    
    return 0;
}