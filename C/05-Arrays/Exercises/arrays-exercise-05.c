#include <stdio.h>

int main() {
    int scores[20];
    float sum = 0.0, average;
    int count_above_average = 0;

    // Getting scores from the user
    printf("Enter 20 scores:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);

        sum += scores[i]; // Accumulate the sum
    }

    // Calculate average
    average = sum / 20;

    // Display average
    printf("Average score: %.2f\n", average);

    // Show scores greater than average and count them
    printf("Scores greater than average:\n");
    for (int i = 0; i < 20; i++)
    {
        if (scores[i] > average)
        {
            printf("%d ", scores[i]);
            count_above_average++;
        }
    }

    printf("\n");

    // Display the count of students who scored above average
    printf("Number of students whose score > average: %d\n", count_above_average);

    return 0;
}