//Write a program to read in 15 numbers and display them
#include <stdio.h>

#define SIZE 15

int main() {
    int numbers[SIZE];
    int i;

    // Read 15 numbers
    printf("Enter %d numbers:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    // Display the numbers
    printf("\nYou entered:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");
    return 0;
}
