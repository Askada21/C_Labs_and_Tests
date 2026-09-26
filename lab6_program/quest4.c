/*Define an integer array with 4 elements. Write a program that will allow the user to
enter 4 numbers into this array and do the following:
i. Display the contents of the array to the screen in the same order they were
entered.
ii. Swap the 1st and 2nd numbers in the array and swap the 3rd and 4th numbers in
the array. Now display the numbers on the screen using this new order.*/
#include <stdio.h>

#define NUM 4

int main(){
    int i, temp;
    int arr[NUM];

    printf("Enter %d numbers: ", NUM);
    for(i = 0; i < NUM; i++){
        scanf("%d", &arr[i]);
    }

//i. Display the contents of the array to the screen in the same order they wereventered.
    printf("Numbers that u entered: ");
    for(i = 0; i < NUM; i++){
        printf("%d ", arr[i]);
    }

    // Swap 1st <-> 2nd and 3rd <-> 4th
    temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;

    temp = arr[2];
    arr[2] = arr[3];
    arr[3] = temp;

    printf("\nSwapped array: ");
    for(i = 0; i < NUM; i++){
        printf("%d ", arr[i]);
    }
    

    return 0;
}