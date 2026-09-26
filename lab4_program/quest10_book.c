/*Write a program to display the effects of an earthquake based on a Richter
scale value input from the keyboard. The effects corresponding to a Richter
scale value.*/
#include <stdio.h>

int main(){
    float value = 0;

    printf("Enter the value: ");
    scanf("%f", &value);

    if (value < 4.0){
        printf("Little");
    }
    else if (value >= 4.0 && value <= 4.9){
        printf("Windows shake");
    }
    else if (value >= 5.0 && value <= 5.9){
        printf("Walls crack");
    }
    else if (value >= 6.0 && value <= 6.9){
        printf("Chimneys tumble");
    }
    else if (value >= 7.0 && value <= 7.9){
        printf("Underground pipes");
    }
    else{
        printf("Ground rises and falls");
    }
    return 0;
}