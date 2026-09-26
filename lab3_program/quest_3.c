#include <stdio.h>

int main(){
    float num1 = 0;
    float num2 = 0;
    float num3 = 0;

    printf("Enter 3 nums: \n");
    scanf("%f%f%f", &num1, &num2, &num3);

    printf("My 3 numbers are:\n");
    printf("%.4f\n", num1);
    printf("%.3f\n", num2);
    printf("%1.f\n", num3);

    return 0;
}