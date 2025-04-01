// Your code here...
#include <stdio.h>

int main() {
    int N, i, j, space;

    // Ask the user for the number of rows
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &N);

    // Loop to print the pyramid
    for (i = 1; i <= N; i++) {
        // Print spaces before the stars
        for (space = 1; space <= N - i; space++) {
            printf(" ");
        }
        // Print stars for the current row
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}