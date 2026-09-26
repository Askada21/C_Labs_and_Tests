#include <stdio.h>

int main(){
    int age = 0;
    int form = 0;

    printf("Age:\n");
    scanf("%d", &age);

    form = 75 * 24 * age;
    printf("%d", form);

    return 0;
}