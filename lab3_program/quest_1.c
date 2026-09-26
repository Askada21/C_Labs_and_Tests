#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("Enter 3 nums: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("My 3 numbers are:\n");
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);
    
    return 0;
}