// Your code here...
#include <stdio.h>

int main() {
    int rows, i, j;

    // Prompt the user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for each row
    for (i = 1; i <= rows; i++) {
        // Inner loop for printing stars
        for (j = 1; j <= i; j++) {
            printf("* "); // Print a star followed by a space
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}