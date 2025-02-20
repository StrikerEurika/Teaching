#include <stdio.h>

// non-return and no param
void print_hello() {
    printf("Hello World\n");
}

// non-return and param
void print_number(int number) {
    printf("Your number is: %d\n", number);
}

int main()
{
    print_number(1);
    print_number(2);
    print_number(3);
    return 0;
}