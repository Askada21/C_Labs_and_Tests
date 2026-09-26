/*Input 2 numbers and find the smaller of the 2 using the conditional operator*/
#include <stdio.h>

int main(){
    int n1 = 0;
    int n2 = 0;

    printf("enter 1st num:\n");
    scanf("%d", &n1);

    printf("enter 2nd num:\n");
    scanf("%d", &n2);

    if(n1 < n2){
        printf("%d is smaller", n1);
    }
    else if (n2 < n1){
        printf("%d is smaller", n2);
    }
    else if (n1 == n2){
        printf("the numbers %d and %d are equal", n1, n2);
    }

    return 0;
}