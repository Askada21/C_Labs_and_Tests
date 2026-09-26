/*Programm to write a program that uses a function to find the highest and lowest number of 3
values. These 3 values must be passed as parameters to the function, i.e.,
function_name(int, int, int). Your function should find these values and display
messages stating:
The Highest value is x
The Lowest value is y*/
#include <stdio.h>

void values(int, int, int);

int main(){
    int num1, num2, num3;
    
    printf("Enter 3 nums:\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    values(num1, num2, num3);
    
    return 0;
}

void values(int a, int b, int c){
    int highest, lowest;
    highest = a;
    lowest = a;

    if (b > highest){
        highest = b;
    }
    if (c > highest)
    {
        highest = c;
    }

    if (b < lowest) {
        lowest = b;
    }
    if (c < lowest){
        lowest = c;
    }

    printf("The Highest value is: %d\n", highest);
    printf("The Lowest value is: %d", lowest);
    
}