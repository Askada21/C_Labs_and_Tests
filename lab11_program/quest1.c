/*Programm to write a program that uses a function to print 10 stars (*) on a single line.
Ensure you declare your function prototype and include adequate comments*/
#include <stdio.h>

void stars(int);

int main(){
    int num;
    
    printf("Enter the number:\n");
    scanf("%d", &num);
    stars(num);
    
    return 0;
}

void stars(int num){
    int i;
    for(i = 0; i < num; i++){

        printf("*");
    }
}

