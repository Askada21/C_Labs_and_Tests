#include <stdio.h>

int main(){
    float cel , fer = 0;

    printf("entwr the degree:\n");
    scanf("%f", &fer);
    cel = (fer - 32)*(5.0/9.0);
    printf("cel:%.2f", cel);

    return 0;
}