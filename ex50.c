/* a C program that calculates how many of the students enrolled to a course can pass the course, or not
 * First ask the user how many students are enrolled to the course.
 * Then dynamically create an integer array that is exactly the number of enrolled students long
 * Ask the user for grade of each student and display how many grades are below and how many grades are above 45 */
#include<stdio.h>
#include<stdlib.h>

//Driver function
int main(){
    //Variable declarations
    int *arr, rep, number_stds , size, succes = 0, unsucces = 0;

    //Getting the size of array from user
    printf("How many students are enrolled to the course?");
    scanf("%d", &number_stds);

    //Dynamically memory allocation to create array
    size = number_stds * sizeof(int);
    arr = (int*)malloc(size);
    free(arr);

    //Getting data of array from user
    printf("Enter student's grades:");
    for(rep = 0; rep < number_stds; rep++){
        //Storing data
        scanf(" %d", &arr[rep]);

        //Determining whether that student succesful or not
        if(arr[rep] >= 45){
            succes++;
        }
        else{
            unsucces++;
        }   
    }

    //Outputting the result
    printf(
    "Number of successful students: %d\n"
    "Number of unsuccessful students: %d\n",
    succes, unsucces );

    //EXit Status
    return(0);
}