/*Copy the program from Q1. Modify this so that you use an array to store the data for
the 2 passengers instead of 2 separate structure variables for each passenger as done in
Q1.
Remember, to create the array of structures, you can do so in any function as follows:
struct passenger_details passengers[2];
e.g., to access the first array element’s number of bags, you would write:
passengers[0].no_of_bags = 1;*/
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

//function signatures
//pointer to modify the original data
void input(struct passenger *p);

//copy of the structure, function cannot change
void display(struct passenger p);

int main(){
    int i;
    //array of structures, create list of 2
    struct passenger passengers[2];

    //input data for 2 passengers
    for(i = 0; i < 2; i++){
        printf("Enter details for passenger %d: \n", i + 1);
        //pass adddress of each element
        input(&passengers[i]);
    }

    //display data for 2 passengers
    printf("\n Passenger details: \n");
    for(i = 0; i < 2; i++){
        //pass by value (copy)
        display(passengers[i]);
    }

    return 0;
}
//start the functions
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