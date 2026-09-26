/*Write a program that reads a single numeral from thw kwyboard and display
its value as a word. For inst, an in[ut of 5 will dispaly the word 'five'.*/

#include <stdio.h>

int main()
{
    int num = 0;
    printf("enter the num from 1 - 4:\n");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
    {
        printf("Answer: one\n");
        break;
    }
    case 2:
    {
        printf("Answer: two\n");
        break;
    }
    case 3:
    {
        printf("Answer: three\n");
        break;
    }
    case 4:
    {
        printf("Answer: four\n");
        break;
    }
    default:
    {
        printf("the num is not valid");
        break;
    }
    }

    return 0;
}