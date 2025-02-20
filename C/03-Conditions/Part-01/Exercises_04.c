#include <stdio.h>

int main() {
    
    int year, month, day;
    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter day: ");
    scanf("%d", &day);

    if (month < 1 || month > 12) {
        printf("Invalid month\n");
    } else if ((month == 2 && (day < 1 || day > 28)) ||
               ((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30)) ||
               ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day < 1 || day > 31))) {
        printf("Invalid date\n");
    } else {
        printf("Valid date\n");
    }

    return 0;
}
