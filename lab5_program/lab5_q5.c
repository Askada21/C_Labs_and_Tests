/*Using a loop, display all the even numbers from 1 - 100, separated by commas (Hint:
use the modulus operator, i.e., % )*/
#include <stdio.h>

int main(){
    int num;

    for (num = 1; num <= 100; num++){
        if (num % 2 == 0){ // Check if the number is even
            printf("%d\n", num);
        }
    }

    return 0;
}


//Different ways how to use this task
/*WHILE LOOP
int main(){
    int i = 1;
    while (i <= 100){
        if (i % 2 == 0){
            printf("%d\n", i);
        }
        i +=1;
    }
    return 0;
}*/



//Write the code by comma
/*int main(){
    int num;

    for (num = 1; num <= 100; num++){
        if (num % 2 == 0){ //Check if the number is even
            if (num < 100)
                printf("%d, ", num);
            else
                printf("%d", num);
        }
    }

    return 0;
}*/