/*Program to calculate and display on separate lines:
• the volume
• the surface area
author Daria Osypova
date 23/09/25*/
#include <stdio.h>

int main()
{
    // Q 2.1
    float volume = 0;
    float surface_area = 0;

    int height = 10;
    float length = 11.5;
    float width = 2.5;


    float volume = length * width * height;
    float surface_area = 2 * (length * width + length * height + width * height);

    printf("volume = %.2f cm^3\n", volume);
    printf("surface area = %.2f cm^2\n", surface_area);

    return 0;
}