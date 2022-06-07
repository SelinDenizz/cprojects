/* Define a CITY structure with one string variable for name and one integer variable for population.
 * Populate an array of 5 CITY structs in main function with user input
 * Pass this array to a function
 * This function should find the city with the largest population and return the result via the second parameter.
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NUM_CITY 5
#define MAX 100

//Data struct
struct CITY{
    char name[MAX];
    int population;
};

//Function prototype
void find_max_pop(struct CITY cities[], struct CITY *Cptr);

//Driver function
int main(void){
    //Variable declarations
    struct CITY cities[NUM_CITY], final;
    int rep;

    //Assigning temp to final 
    strcpy(final.name, "NULL");
    final.population = 0;

    //Getting the name and population of cities from user
    for(rep = 0; rep < NUM_CITY; rep++){
        printf("Enter %d city and population:", rep + 1);
        scanf("%s %d", cities[rep].name, &cities[rep].population);
    }

    //Function call to find max populated city
    find_max_pop(cities, &final);

    //Output the final result
    printf("The city with the largest population is %s (%d)\n", final.name, final.population);

    //Return status
    return(0);
}

//Function to find max populated city
void find_max_pop(struct CITY cities[], struct CITY *Cptr){
    //Variable declarations
    int rep, max;

    //Scanning the array to find max and assigning first array element as max
    max = cities[0].population;
    for(rep = 1; rep < NUM_CITY; rep++){

        //If a city has bigger population is found
        if(cities[rep].population > max){
            //Then transmit all information to the final structure to return main
            strcpy(Cptr->name,cities[rep].name);
            Cptr->population = cities[rep].population;
        }
    }
}