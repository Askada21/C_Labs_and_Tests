/*Write a program using an array that will allow the user to input 3 temperature
readings in Fahrenheit. After all the temperatures have been read from the keyboard,
display each of these temperatures on the screen and its corresponding temperature in
Celsius.
Use the following formula to convert from Fahrenheit to Celsius:
Celsius = (Fahrenheit - 32.0) * (5.0 / 9.0)*/

#include <stdio.h>

#define NUM 3

int main (){

    int arr[NUM];
    int i;
    float celsium;

    printf("Input %d temperatures: \n", NUM);
    for(i = 0; i < NUM; i++){
        scanf("%d", &arr[i]);
    }

    printf("Temperature in Celsium: \n");
    for(i = 0; i < NUM; i++){
        celsium = (arr[i] - 32.0) * (5.0 / 9.0);
        printf("%.2f\t", celsium);
    }

    return 0;
}