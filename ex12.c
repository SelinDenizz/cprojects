/* A program where the user enters N(N<15) and N integers into 1-d array, the program will display the average and all elements that are above the average of the array */
#include<stdio.h>
#define MAX 15 
int main(){
    //Variable declarations
    int arr[MAX], size, i, sum = 0, j;
    float avg;

    //Getting the size of array from user
    printf("Enter N:");
    scanf("%d", &size);

    //Creating the array by getting elements from user
    for(i = 0; i < size; i++){
        printf("Please enter the element %d:", i + 1);
        scanf(" %d", &arr[i]);
        sum += arr[i];
    }

    //Printing the average
    avg = (float) sum / (float) size ;
    printf("The average is : %f\n", avg);

    //Find and create above the average array of elements and printing
    printf("Value above average are: ");
    for(j = 0; j < size; j++){
        if(arr[j] > avg){
            printf(" %d", arr[j]);
    }
  }

  //Exit Status
  return(0);
}