#include <stdio.h>
int main() {

    int c[26];

    // input the values into the array
    for (int i = 0; i < 26; i++)
    {
        c[i] = (char) (i + 65); 
    }
    
    // Print the array to verify the values
    for (int i = 0; i < 26; i++) {
        printf("%c ", c[i]);
    }

    printf("\n");
    return 0;
    
}