/*write a program to read in 2 integers and
check if the first integer is evenly divisible by the second*/
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Check for division by zero
    if (num2 == 0) {
        printf("Division by zero is not allowed.\n");
    } else {

        if (num1 % num2 == 0) {
            printf("%d is evenly divisible by %d.\n", num1, num2);
        } else {
            printf("%d is not evenly divisible by %d.\n", num1, num2);
        }
    }

    return 0;
}
