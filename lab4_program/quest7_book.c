/*Write a program to input a number 1 - 7 from the keyboard, where 1 represents
Sunday, 2 Monday, 3 Tuesday, etc. Display the day of the week corresponding
to the number typed by the user. If the user types a number outside the range 1 - 7,
dispaly an error message.*/

#include <stdio.h>

int main(){
    int num = 0;

    printf("Enter the num from 1 - 7: ");
    scanf("%d", &num);

    switch (num){
        case 1: {
            printf("Sunday");
            break;
        }
        case 2: {
            printf("Monday");
            break;
        }
        case 3: {
            printf("Tuesday");
            break;
        }
        case 4: {
            printf("Wednesday");
            break;
        }
        case 5: {
            printf("Thursday");
            break;
        }
        case 6: {
            printf("Friday");
            break;
        }
        case 7: {
            printf("Saturday");
            break;
        }
        default:{
            printf("Invalid num");
            break;
        }
    }

    return 0;
}