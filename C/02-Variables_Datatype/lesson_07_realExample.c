#include <stdio.h>

int main() {
    // Create variables of different data types
    char name[50] = "BoomBayaBoom";
    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';

    // Print variables
    printf("Customer name: %s\n", name);
    printf("Number of items: %d\n", items);
    printf("Cost per item: %.2f %c\n", cost_per_item, currency);
    printf("Total cost = %.2f %c\n", total_cost, currency);

    return 0;
}