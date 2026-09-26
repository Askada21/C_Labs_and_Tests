/*Write a program that uses an array to enter 5 integer numbers. Copy the contents of
this array into another array using only a loop.*/
#include <stdio.h>

#define NUM 5

int main()
{
    int arr1[NUM];
    int arr2[NUM];
    int i = 0;

    printf("Enter %d numbers: \n", NUM);

    for (i = 0; i < NUM; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Original array: ");
    for(i = 0; i < NUM; i++) {
        printf("%d", arr1[i]);
    }

    for (i = 0; i < NUM; i++) {
        arr2[i] = arr1[i];
    }

    printf("\nFinal array: ");
    for(i = 0; i < NUM; i++) {
        printf("%d", arr2[i]);
    }

    return 0;
}