#include <stdio.h>
/*Write a program to calculate the volume of a cube. 
The length of all sides of the cube is 2.8 m. Display the volume to standard output.*/
int main()
{
    float side = 2.8;
    float volume = 0;
    

    // Formula: V = side^3
    volume = side * side * side;

    // Display result
    printf("volume of the cube = %.2f cm^3", volume);

    return 0;
}