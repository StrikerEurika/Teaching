#include <stdio.h>

int main() {

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    char b[5] = {'a', 'e', 'i', 'o', 'u'};

    // in here, we grap the the letter by ASCII value, if you see this
    // you will wonder why we need to do this. ask me 5$ (✿◡‿◡)
    int c[26];

    for (int i = 0; i < 26; i++)
    {
        c[i] = (char) (i + 65); 
    }

    // print the array
    
    // for (int i = 0; i < 26; i++)
    // {
    //     printf("%c ", c[i]);
    // }
    
    

    return 0;
}