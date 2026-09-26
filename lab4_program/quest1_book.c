#include <stdio.h>

int main(){

    char marriage_status = ' ';

    printf("enter the char: \n");
    scanf("%c", &marriage_status);

    switch (marriage_status){
        case 'S': case 's': {
            printf("single %c", marriage_status);
            break;
        }
        case 'M': case 'm': {
            printf("married %c", marriage_status);
            break;
        }
        case 'W': case 'w': {
            printf("widowed %c", marriage_status);
            break;
        }
        case 'E': case 'e' :{
            printf("separated %c", marriage_status);
            break;
        }
        case 'D': case 'd': {
            printf("divorsed %c", marriage_status);
            break;
        }
        default: {
            printf("error");
            break;
        }
    }

    return 0;
}