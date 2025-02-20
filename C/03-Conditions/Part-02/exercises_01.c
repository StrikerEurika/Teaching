#include <stdio.h>

int main() {
    int choice;
    float temperature, convertedTemperature;

    printf("Temperature Conversion Menu:\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        convertedTemperature = (temperature * 9/5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", convertedTemperature);
        break;
    case 2:
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        convertedTemperature = (temperature - 32) * 5/9;
        printf("Temperature in Celsius: %.2f\n", convertedTemperature);
        break;
    default:
        printf("Invalid choice\n");
        break;
    }

    return 0;
}