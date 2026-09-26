/*Write a program that asks the user to enter an integer between 1 and 100. Check
whether the integer is even or odd and print a message on the screen stating, "Number
x is Even" or "Number y is Odd".*/
#include <stdio.h>

int main()
{
    int num = 0;

    printf("enter the num between 1 - 100: ");
    scanf("%d", &num);
    if (num >= 1 && num <= 100) {
        if (num % 2 == 0)
        {
            printf("Number  %d is Even\n", num);
        }
        else if (num % 1 == 0)
        {
            printf("Number  %d is Odd\n", num);
        }
    }
    else {
        printf("Wrong range");
    }

    return 0;
}