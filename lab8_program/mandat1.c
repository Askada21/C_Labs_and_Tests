/*
Program to show how to initialise two 3x4 integer arrays (2-Dimensional arrays with 3 rows and
4 columns in each). Initialise both arrays with any random integer values.
In your program, declare a 3 rd 3x4 array. Multiply each corresponding element in the
1st and 2 nd array and store this result in the corresponding element of the 3 rd array. For
example, array3[0][0] = array1[0][0] x array2[0][0], array3[0][1] = array1[0][1] x
array2[0][1], etc..
Author: Daria Osypova
Date: 18/11/25
*/
#include <stdio.h>

#define ROW 3
#define COL 4

int main()
{

    // Initialise two 3x4 arrays with random integer values
    int arr1[ROW][COL] = {
        {1, 2, 3, 6},
        {8, 5, 2, 7},
        {1, 5, 7, 4}
    };

    int arr2[ROW][COL] = {
        {4, 6, 4, 2},
        {9, 4, 1, 9},
        {5, 1, 4, 3}
    };

    //Declare variables 
    int arr3[ROW][COL];
    int i, j;

    //Print the output of rows and cols
    printf("Result: \n");
    //Go through the for loop
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            //Make formula to multiple rows and cols in arrays
            arr3[i][j] = arr1[i][j] * arr2[i][j];
            printf("%d ", arr3[i][j]);
        }
        //Each iterations go to the next line 
        printf("\n");
    }

    return 0;
}