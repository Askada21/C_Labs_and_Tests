#include <stdio.h>
#include <string.h>

//Adjust size
#define SIZE 4
#define MAX 20

int main(){
    //Initialize variables
    char *countries[SIZE] = {"Australia", "Belgium", "China", "Denmark"};
    char *cities[SIZE] = {"Canberra", "Brussels", "Beijing", "Copenhagen"};
    char input[MAX];
    int i;

    //Ask user
    printf("Enter the country: ");
    scanf("%s", input);

    //Start for loop in order to go through the countries that located into array
    for (i = 0; i < SIZE; i++){
        //Compare these arrays by indexes 
        if (strcmp(input, countries[i]) == 0){
            printf("The city of the country %s is %s", countries[i], cities[i]);
            //Stop the progarm immediately 
            return 0;
        }
    }
    printf("Country isn't found.");

    return 0;
}