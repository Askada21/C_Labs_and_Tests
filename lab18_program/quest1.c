/*Write separate programs to:
1. Using Structures, write a program to do the following:
Design structure templates to store data as follows:
• Airline name
• Flight number
• Passenger surname
• Seat number, e.g., 12A, 25C
• Destination
• No. of bags
Using functions only, your program must:
a) Enter the travel information for 2 separate passengers
b) Display the data for each passenger*/

#include <stdio.h>
#include <string.h>

//Structure template
struct passenger {
    char airline_name[100];
    int flight_number;
    char passenger_surname[100];
    char seat_number[4];
    char destination[100];
    int number_bags;
};

//pointer to modify the original data
void input(struct passenger *p);

//copy of the structure, function cannot change
void display(struct passenger p);

int main(){
    struct passenger p1, p2;

    printf("Enter passenger1: ");
    input(&p1);

    printf("Enter passenger2: ");
    input(&p2);

    printf("\n Passenger details: \n");
    display(p1);
    display(p2);

    return 0;
}

void input(struct passenger *p){
    printf("\n Enter airline name: ");
    scanf("%s", p -> airline_name);

    printf("Enter Flight Number: ");
    scanf("%d", &p ->flight_number);

    printf("Enter Surname: ");
    scanf("%s", p -> passenger_surname);

    printf("Enter Seat Number: ");
    scanf("%s", p -> seat_number);

    printf("Enter Destination: ");
    scanf("%s", p -> destination);

    printf("Enter Number of Bags: ");
    scanf("%d", &p -> number_bags);
}

void display(struct passenger p){
    printf("Passenger: \n");
    printf("airline: %s\n", p.airline_name);
    printf("flight number: %d\n", p.flight_number);
    printf("Surname: %s\n", p.passenger_surname);
    printf("Seat: %s\n", p.seat_number);
    printf("Destination: %s\n", p.destination);
    printf("Bags: %d\n", p.number_bags);
}