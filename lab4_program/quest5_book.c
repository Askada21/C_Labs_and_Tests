/*In a triangle, the sum of any 2 sides must be greater than the third side.
Write a program to input 3 numbers and determine if they from a valid triangle.*/
#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf("enter 1st num:\n");
    scanf("%d", &n1);

    printf("enter 2nd num:\n");
    scanf("%d", &n2);

    printf("enter 3rd num:\n");
    scanf("%d", &n3);

    int sum = n1 + n2;

    if (sum > n3)
    {
        printf("The sum - %d is greater than the side - %d", sum, n3);
    }
    else
    {
        printf("The 3rd side %d is greater than the sum %d", n3, sum);
    }

    return 0;
}

/*Second var*/
#include <stdio.h>

int main() {
    float a, b, c;

    // Input three sides
    printf("Enter the first side: ");
    scanf("%f", &a);

    printf("Enter the second side: ");
    scanf("%f", &b);

    printf("Enter the third side: ");
    scanf("%f", &c);

    // Check the triangle inequality theorem
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The given sides form a valid triangle.\n");
    } else {
        printf("The given sides do NOT form a valid triangle.\n");
    }

    return 0;
}

