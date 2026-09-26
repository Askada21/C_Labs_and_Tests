#include <stdio.h>
/*Write a program that uses the modulus operator, i.e., % , to calculate and display the
remainder for the following arithmetic operations: (display the remainder beneath
each operation)
• 2 % 2
• 3 % 2
• 5 % 2
• 7 % 3
• 100 % 33
• 100 % 7*/

int main()
{

    int var1 = 2;
    int var2 = 3;
    int var3 = 5;
    int var4 = 7;
    int var5 = 100;
    int var6 = 33;

    printf("2 %% 2 = %d\n", var1 % var1);
    printf("3 %% 2 = %d\n", var2 % var1);
    printf("5 %% 2 = %d\n", var3 % var1);
    printf("7 %% 3 = %d\n", var4 % var2);
    printf("100 %% 33 = %d\n", var5 % var6);
    printf("100 %% 7 = %d\n", var5 % var4);

    return 0;
}