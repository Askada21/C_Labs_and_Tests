/*Write a program that uses a Structure to store the following details for a city:
• City name
• Population
• Annual rainfall (mm)
• Annual sunshine (hours)
(i) Enter the above details for 1 city.
(ii) Using a pointer variable only, display the data entered. Hint: create a pointer
variable that will point at the structure variable. Then use the arrow-notation,
i.e., -> to access the data.
(iii) Calculate the city with the highest annual rainfall and the city with the lowest
annual sunshine*/
#include <stdio.h>

#define NUM 3   

struct City {
    char name[50];
    int population;
    float rainfall;   
    float sunshine;   
};

int main() {
    struct City cities[NUM];
    struct City *ptr;

    int i;

    // (i) Input details for cities
    for (i = 0; i < NUM; i++) {
        printf("\nEnter details for City %d:\n", i + 1);

        printf("City name: ");
        scanf("%s", cities[i].name);

        printf("Population: ");
        scanf("%d", &cities[i].population);

        printf("Annual rainfall (mm): ");
        scanf("%f", &cities[i].rainfall);

        printf("Annual sunshine (hours): ");
        scanf("%f", &cities[i].sunshine);
    }

    // (ii) Display using pointer only
    printf("\nCity Details (Using Pointer): \n");

    for (i = 0; i < NUM; i++) {
        ptr = &cities[i];

        printf("\nCity %d:\n", i + 1);
        printf("Name: %s\n", ptr->name);
        printf("Population: %d\n", ptr->population);
        printf("Rainfall: %.2f mm\n", ptr->rainfall);
        printf("Sunshine: %.2f hours\n", ptr->sunshine);
    }

    // (iii) Find highest rainfall and lowest sunshine
    int maxRainIndex = 0;
    int minSunIndex = 0;

    for (i = 1; i < NUM; i++) {
        if (cities[i].rainfall > cities[maxRainIndex].rainfall) {
            maxRainIndex = i;
        }

        if (cities[i].sunshine < cities[minSunIndex].sunshine) {
            minSunIndex = i;
        }
    }

    printf("\n Results: \n");
    printf("City with highest rainfall: %s (%.2f mm)\n",
           cities[maxRainIndex].name, cities[maxRainIndex].rainfall);

    printf("City with lowest sunshine: %s (%.2f hours)\n",
           cities[minSunIndex].name, cities[minSunIndex].sunshine);

    return 0;
}