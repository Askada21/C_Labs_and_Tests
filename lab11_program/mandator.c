/*Program to write a program that uses 2 functions called sum() and average(). Your program must
ask the user to enter 3 numbers inside the main(). Your main() should then pass these
3 values as parameters to the function sum(). This function should calculate the sum
of the 3 numbers. Your function sum() should then pass the sum of the 3 numbers as a
parameter to the function average(). The function average() should then calculate the
average of the 3 numbers and display this on the screen.
Author: Daria Osypova
Date: 03/02/25
*/
#include <stdio.h>

//function signature
void sum(int, int, int); //function expects 3 values
void average(int);

int main(){
    //declare variables
    int num1, num2, num3;
   
    printf("Enter 3 numbers:\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    //call the function
    sum(num1, num2, num3); //we can't leave just sum() because the function expects 3 values instead of 1. 

    return 0;
}//end main

//function sum() used to display a set of asterix
void sum(int num1, int num2, int num3){
    int total;
    total = num1 + num2 + num3;

    printf("The sum is: %d\n", total); //optioal

    average(total);
}

//function average() used to display a set of asterix
void average(int total) {
    float avg;
    avg = total/3;
    printf("The average is: %.2f", avg);
}
