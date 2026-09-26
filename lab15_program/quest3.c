/*Write a program that allows a user to input two words. Compare these words to see if
they are the same. Display appropriate messages whether or not the two words are the
same*/

#include <stdio.h>
#include <string.h>

int main(){
    //Initialize variables
    char str1[10];
    char str2[10];
    int result = 0;

    //Ask user1
    printf("Enter first string: ");
    scanf("%s", str1);

    //Ask user2
    printf("Enter second string: ");
    scanf("%s", str2);

    //Compare 2 strings
    result = strcmp(str1, str2);

    //Check if the strings are the same
    if (result == 0){
        printf("String are the same.");
    } else {
        printf("\nDifferent strings.");
    }

    return 0;
}