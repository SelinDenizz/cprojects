/* A program to input N integers which should be less than 20.
 * It'll find and output the location of the last odd integer in the given array. */
#include<stdio.h>
#define MAX 20
int main(){
    //Variable declarations
    int arr[MAX], size, rep;

    //Getting the size of array from user
    printf("Enter n:");
    scanf("%d", &size);

    //Creating the array
    printf("Enter %d integers:", size);
    for(rep = 0; rep < size; rep++){
        scanf(" %d", &arr[rep]);
    }

    //Scanning the loop from the end the first odd number will be printed
    for(rep = size - 1; rep >= 0; rep--){
        if(arr[rep] % 2){
            printf("The last odd integer is %d and its location is %d", arr[rep], rep );
            break;
        }
    }



    //Exit Status
    return(0);
}