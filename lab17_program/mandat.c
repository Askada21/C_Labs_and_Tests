/*Using Structures, write a program to do the following:
Design a structure template to store biographical data about a person.
Your program must:
a) Enter data for a person's first name, surname, date of birth, height, weight, eye
colour & country of citizenship.
b) Display the data entered.
c) Copy the data and store it in a 2 nd person's record and then modify it.
d) Display the new data for the 2 nd person.
Author: Daria Osypova
Date: 23/03/25
*/
#include <stdio.h>

#define SIZE 100

struct person
{
    char first_name[SIZE];
    char last_name[SIZE];
    char DOB[SIZE];
};

int main()
{
    struct person per1, per2;

    printf("\nEnter the name for a person: ");
    scanf("%s", per1.first_name);

    printf("\nEnter the surname for a person: ");
    scanf("%s", per1.last_name);

    printf("\nEnter the DOB for a person: ");
    scanf("%s", per1.DOB);

    // b) Display first person's data
    printf("\n--- First Person Details ---\n");
    printf("\nThe name of the first person is: %s", per1.first_name);
    printf("\nThe surname of the first person is: %s", per1.last_name);
    printf("\nThe DOB of the first person is: %s", per1.DOB);

    // c) Copy data to second person
    per2 = per1;

    // Modify second person's data
    printf("\nModify second person's details:\n");
    printf("\nStudent 2");
    printf("\nEnter the DOB for a second person: ");
    scanf("%s", per2.DOB);

    printf("\nEnter the name for Student 2: ");
    scanf("%s", per2.first_name);

    printf("\nEnter the surname for Student 2: ");
    scanf("%s", per2.last_name);

    // d) Display second person's data
    printf("\n--- Second Person Details ---\n");
    printf("\nName: %s %s\n", per2.first_name, per2.last_name);
    printf("\nDOB: %s\n", per2.DOB);

    return 0;
}