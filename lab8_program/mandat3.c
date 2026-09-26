/*Program to write a program that uses a 3x2 array. Your program must do the following:
a) Enter in values for each element in the array.
b) Calculate and display the sum of row 0, row 1, and row 2 separately.
c) Calculate and display the sum of column 0 and column 1 separately.
d) Find the highest number in the array and display it.
NOTE: You might try to design the solution for this program on paper first. Do not
hack code to solve this question.
Author: Daria Osypova
Date: 18/11/25*/

#include <stdio.h>

#define ROW 3 
#define COL 2

int main() {

    int row_sum[ROW] = {0};
    int col_sum[COL] = {0};
    int arr[ROW][COL];
    int i, j;
    int highest;

    printf("Enter %d integers for a 3x2 array:\n", ROW * COL);

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("Enter value for array[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("Enter numbers of rows:\n");
    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
            row_sum[i] += arr[i][j];
        }
    }

    printf("Enter numbers of cols:\n");
    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
            col_sum[j] += arr[i][j];
        }
    }

    highest = arr[0][0];
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            if (arr[i][j] > highest) {
                highest = arr[i][j];
            }
        }
    }

  
    printf("Row 0 sum = %d\n", row_sum[0]);
    printf("Row 1 sum = %d\n", row_sum[1]);
    printf("Row 2 sum = %d\n", row_sum[2]);


    printf("Column 0 sum = %d\n", col_sum[0]);
    printf("Column 1 sum = %d\n", col_sum[1]);

    printf("\nHighest number in the array = %d\n", highest);
    return 0;
}