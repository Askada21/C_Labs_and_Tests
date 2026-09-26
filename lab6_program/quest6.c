/*Write a program to enter numbers into an integer array with 3 elements, i.e., the size
of the array is 3. Your program must sort the array in ascending order (i.e., the first
element is the smallest and each element after the first is greater than or equal to the
element before it).*/
#include <stdio.h>

#define NUM 3

int main(){
    int i, j, temp;
    int arr[NUM];

    printf("%d numbers: ", NUM);
    for (i = 0; i < NUM; i++){
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < NUM - 1; i++){
        for(j = i + 1; j < NUM; j++){
            if (arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("ascending order: ");
    for(i = 0; i < NUM; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}