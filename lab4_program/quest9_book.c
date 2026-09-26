/*Write a program to input the time of day in Ireland and display the equivalent
time in Washington(-5 hours), Moscow(+3 hours), and Beijing(+7 hours). 
Input the time in the 24-hours format, e.g. 22:35 (10:35 p.m.)*/
#include <stdio.h>

int main(){
    int hours = 0;
    int minutes = 0;

    printf("Enter time in ireland (24 hours format 20 35): ");
    scanf("%d%d", &hours, &minutes);

    //Formula
    int washington = hours - 5;
    //You must use curly brackets if you want to run more than one statement under the if
    if (washington < 0)
        washington = washington + 24;
    
    int moscow = hours + 3;
    if (moscow >= 24)
        moscow = moscow - 24;

    int beijing = hours + 7;
    if (beijing >= 24)
        beijing = beijing - 7;
    
    printf("Washington %d:%d\n", washington, minutes);
    printf("Moscow %d:%d\n", moscow, minutes);
    printf("Beijing %d:%d\n", beijing, minutes);



    
  
   




    return 0;
}