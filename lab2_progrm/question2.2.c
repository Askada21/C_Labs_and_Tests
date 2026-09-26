/*Program to calculate the area of a circle
author Daria Osypova
date 23/09/25*/
#include <stdio.h>

int main()
{
    float area = 0;

    float radius = 4.8;
    float pi = 3.14;
    float area = pi * (radius * radius);

    printf("the area of a circle = %.2f cm^2", area);
    return 0;
}