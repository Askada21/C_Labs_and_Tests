/*Write a program using a while loop to display the numbers 1 - 10 in descending order
on the same line and each number separated by a comma e.g., 10,9,8,7,6,5,4,3,2,1*/
#include <stdio.h>

int main(){
    int i = 10;
    while (i >= 1){
        if (i > 1){
            printf("%d,", i);
        }
        else {
            printf("%d", i); //No comma after tha last number
        }
        i -= 1;
    }

    return 0;
}


//In this code the output is 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, the sign is comma.
/*int main(){
    int i = 10;
    while (i >= 1){
        printf("%d,", i);
        i -= 1;
    }
    return 0;
}*/



/*int main(){
    int i = 1;
    while (i <= 10){
        printf("%d, ", i);
        i += 1;
    }
    return 0;
}*/


//Using FOR LOOP
/*int main(){
    int i = 0;
    
    for (i = 10; i >= 1; i--){
        printf("%d,", i);
    }
    return 0;
}*/