/*Calculate and display the sum of the integers 1 to 5
Calculate and display the average of the following floating-point numbers: 1.0,
1.1, 1.2, ..... 2.0*/
#include <stdio.h>

int main()
{
    // Q1.1
    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        sum += i; // sum = sum + i
    }
    printf("sum of integers 1 to 5 = %d\n", sum);

    // Q1.2
    float num, total = 0.0;
    int count = 0;

    for (num = 1.0; num <= 2.0; num += 0.1)
    {
        total += num;
        count++;
    }

    float average = total / count;
    printf("average of numbers 1.0 to 2.0 (step 0.1) = %.2f\n", average);

    return 0;
}