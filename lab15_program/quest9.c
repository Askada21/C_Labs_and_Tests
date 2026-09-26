/*Program to ask a user for their name. The user's name is then compared with a list of names 
held in an array in memory. If the user's name is in this list, display a suitable greeting, 
otherwise display the message "Name not found". */
#include <stdio.h>
#include <string.h>

//Adjust size
#define SIZE 5
#define NAME_LEN 20

int main(){

    //Initialize variables 
    char name[NAME_LEN];
    char *names[SIZE] = {"Daniel", "Tom", "Maya", "Sofia", "Anna"};
    int i;
   
    //Ask user 
    printf("Enter your name: \n");
    scanf("%s", name);

    printf("\n");

    //Start for loop in order to go through the names that located into array
    for (i = 0; i < SIZE; i++){
        //Use nested if loop
        //Equal 2 arrays, their lebgths 
        if (strlen(name) == strlen(names[i])){
            //Compare these arrays by indexes 
            if (strcmp(name, names[i]) == 0){
                printf("Hello %s", name);
            }
            else{
                printf("Name not found.");
            }
        }
    }

    return 0;
}