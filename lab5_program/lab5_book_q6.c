/*Write a program to find the sum of all odd integers in the range 1 - 99.*/
#include <stdio.h>

int main(){
    int num = 1;
    int sum = 0;
    
    while (num <= 99){
        if (num % 2 == 1){
            //Leave the last num without comma
            if (num < 99)
            printf("%d, ", num);
            else 
            printf("%d.", num);
            //Until here
            sum += num;
        }
        
        num += 2;
    }
    printf("\nThe sum is %d", sum);

    return 0;
}