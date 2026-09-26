/*
Program to input three floating-point numbers and to calculate the sum and average
author Daria Osypova
date 07/10/25
*/
#include <stdio.h>

int main()
{
    //Initialize the variables 
    float num1 = 0;
    float num2 = 0;
    float num3 = 0;
    float sum = 0;
    float average = 0;

    //Creating numbers and input from user
    printf("Enter three numbers:\n");
    scanf("%f%f%f", &num1, &num2, &num3);

    //Creating formulas to calculate the sum and average  
    sum = num1 + num2 + num3;
    average = sum / 3;

    //To show the last output of calculations 
    printf("The sum is %.1f\n", sum);
    printf("The average is %.1f\n", average);

    return 0;
}