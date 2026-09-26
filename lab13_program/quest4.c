/*Passing 1-D Array. Make a copy of Q2 above but this time, use your function to
change the contents of the array, i.e. multiply each number in the array by 2. When
your function has finished and your program execution returns to the main(), display
the contents of your array in your main() and see if the changes made to the contents
of the array in your function can be seen. If not, why?*/
#include <stdio.h>

//set a constant variable
#define NUM 5

//Function signature
void multiply_by_two(int arr[]);

int main(){
    
    //initialise variables
    int value[NUM];
    int i;

    // User enters values
    printf("Enter %d numbers:\n", NUM);
    for(i = 0; i < NUM; i++){
        scanf("%d", &value[i]);
    }

    // Call the function to modify the array
    multiply_by_two(value);

    // Display the modified array
    printf("\nArray after multiplying by 2:\n");
    for(i = 0; i < NUM; i++){
        printf("%d ", value[i]);
    }
    printf("\n");

    return 0;
}

void multiply_by_two(int arr[]){
    int i;
    for(i = 0; i < NUM; i++){
        arr[i] = arr[i] * 2;
    }
}
