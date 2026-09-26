#include <stdio.h>

int main(){
    int num1 = 10;
    float num2 = 2.24;
    char num3 = 'A';

    printf("num1 contains %d,\nnum2 contains %f,\nnum3 contains %c.", num1, num2, num3);
    /*If I print %f instead %d for int => 
    => it will display the message that I have invalid data type.*/

}