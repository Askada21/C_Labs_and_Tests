/*Write a program to display all the hour and minute values in a 24-hour clock, 0:01, 0:02, 12:59.
How would you display the values in fifteen-minute intervals?*/
#include <stdio.h>

int main (){
    int hour, minute;
    //Nested loop
    for(hour = 0; hour < 24; hour++){
        for(minute = 0; minute < 60; minute++){
            printf("%d:%d\n", hour, minute);
        }
    }

    return 0;
}