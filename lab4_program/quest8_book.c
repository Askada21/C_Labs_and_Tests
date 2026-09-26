/*Add the increment operator (1 or i) and the decrement operator (D or d)
to the simple calculator program P5F.*/
#include <stdio.h>

int main() {
    char op;       // Operator
    float num1, num2, result;

    printf("=== Simple Calculator (P5F) ===\n");
    printf("Operators available: +, -, *, /, i (increment), d (decrement), q (quit)\n");

    while (1) { //creates an infinite loop that keeps the calculator running until the user quits
        printf("\nEnter operator (+, -, *, /, i, d, q): ");
        scanf("%c", &op); 

        // Quit program
        if (op == 'q' || op == 'Q') {
            printf("Exiting calculator.\n");
            break;
        }

        // Increment operator (i or 1)
        else if (op == 'i' || op == 'I' || op == '1') {
            printf("Enter a number to increment: ");
            scanf("%f", &num1);
            result = num1 + 1;
            printf("Result: %.2f + 1 = %.2f\n", num1, result);
        }

        // Decrement operator (d or D)
        else if (op == 'd' || op == 'D') {
            printf("Enter a number to decrement: ");
            scanf("%f", &num1);
            result = num1 - 1;
            printf("Result: %.2f - 1 = %.2f\n", num1, result);
        }

        // arithmetic operators
        else if (op == '+' || op == '-' || op == '*' || op == '/') {
            printf("Enter first number: ");
            scanf("%f", &num1);
            printf("Enter second number: ");
            scanf("%f", &num2);

            switch (op) {
                case '+':
                    result = num1 + num2;
                    printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                    break;
                case '-':
                    result = num1 - num2;
                    printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                    break;
                case '*':
                    result = num1 * num2;
                    printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                    break;
                case '/':
                    if (num2 == 0) {
                        printf("Error: Division by zero is not allowed.\n");
                    } else {
                        result = num1 / num2;
                        printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                    }
                    break;
            }
        }

        else {
            printf("Invalid operator! Try again.\n");
        }
    }

    return 0;
}
