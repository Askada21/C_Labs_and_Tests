/*Write a program that counts from one to ten, prints the values on a separate line for
each, and prints a message stating, "This number is three" and "This number is seven"
when the count is 3 and when the count is 7 respectively*/
#include <stdio.h>

int main(){
    int num = 1;

    while (num <= 10){
        printf("%d\n", num);

        switch(num){
            case 1:{
                printf("This number is one\n");
                break;
            }

            case 2:{
                printf("This number is two\n");
                break;
            }

            case 3:{
                printf("This number is three\n");
                break;
            }

            case 4:{
                printf("This number is four\n");
                break;
            }

            case 5:{
                printf("This number is five\n");
                break;
            }

            case 6:{
                printf("This number is six\n");
                break;
            }

            case 7:{
                printf("This number is seven\n");
                break;
            }

            case 8:{
                printf("This number is eight\n");
                break;
            }

            case 9:{
                printf("This number is nine\n");
                break;
            }

            case 10:{
                printf("This number is ten\n");
                break;
            }
            
        }

        num += 1;
    }

    return 0;
}