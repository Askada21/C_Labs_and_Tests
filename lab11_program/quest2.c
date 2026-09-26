/*Programm to write a program that uses a function with 2 parameters (a character and an integer,
e.g., function_name(char, int). Your function must display the character parameter a
certain number of times on one line where this number is the integer parameter. For
example, if your function is function_name(*,5) it will display
******/
#include <stdio.h>

void function_name(int, char);

int main(){
    int num = 0;
    char ch;
    printf("How many characters to display:\n");
    scanf("%d", &num);

    // Clears the input buffer
    while (getchar() != '\n');
    
    printf("Which character to display:\n");
    scanf("%c", &ch);

    function_name(num, ch);

    return 0;
}

void function_name(int num, char ch){
    int i;
    for(i = 0; i < num; i++){
        printf("%c", ch);
    }
}