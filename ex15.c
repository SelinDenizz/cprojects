/* Write a C program that read a series of 10 integers from user, and determines also prints the smallest and the second smallest values of the 10 numbers.
 * Use a function that receives an array and its size and displays the smallest and the second smallest */
#include<stdio.h>
#define SIZE 10

//Function prototype
void find_fsmall_ssmall(int arr[], int size);

int main(){
    //Variable declarations
    int arr[SIZE], i ;

    //Creating the array
    for(i = 0; i < SIZE; i++){
        printf("Please enter the %d element of array:", i + 1);
        scanf("%d", &arr[i]);
    }

    //Function call
    find_fsmall_ssmall(arr , SIZE);
}

//Function to find first smallest and second smallest
void find_fsmall_ssmall(int arr[], int size){
    //Variable declaration
    int i, smallest, ssmallest;

    //Conditional Structure
    if(arr[0] < arr[1]){
        smallest = arr[0];
        ssmallest = arr[1];
    }
    else{
        smallest = arr[1];
        ssmallest = arr[0];
    }

    //Looping structure to check and assign the smallest and second smallest
    for(i = 2; i < size ; i++){
        if(arr[i] < smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < ssmallest){
            ssmallest = arr[i];
        }
    }

    //Printing the values
    printf("The smallest element is %d and the second smallest element is %d \n", smallest, ssmallest);
}

