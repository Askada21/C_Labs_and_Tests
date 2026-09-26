/*Write a program that asks the user to enter a number between 1 - 5. Your program
should display all the numbers between 1 - 20 that are evenly divisible by this
number. You will need to use a loop*/
#include <stdio.h>

int main (){
    int i = 1;
    int num_b_one_five = 0;

    printf("Enter the num between 1 - 5: ");
    scanf("%d", &num_b_one_five);

    //Validate input
    if (num_b_one_five < 1 || num_b_one_five > 5){ //If the number is smaller than 1 OR bigger than 5 → it’s invalid.
        printf("Invalid input! Please enter a number between 1 and 5.\n");
        return 1; //“Stop running the program here — something went wrong.”
    }

    printf("Numbers between 1 and 20 evenly divisible by %d:\n", num_b_one_five);

    while (i <= 20){
        if (i % num_b_one_five == 0){
            printf("%d ", i);
        }
        i += 1;
    }
    
    return 0;
}