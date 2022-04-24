/* A program to input N number of integers which should be less than 20.
 * It'll sort the array using bubble sort algorithm.
 * Use a function that receives an array and its size, sorts and returns the array calling function. */
#include<stdio.h>
#define MAX 20
//Function prototypes
void sort_arr(int arr[], int size);

//Driver function 
int main(){
    //Variable declarations
    int arr[MAX], size, rep;

    //Getting the size of array from user
    printf("Please enter n:");
    scanf("%d", &size);

    //Creating the array
    printf("Please enter %d integers:", size);
    for(rep = 0; rep < size; rep++){
        scanf(" %d", &arr[rep]);
    }
    
    //Function call
    sort_arr(arr, size);

    //Printing the latest form of array
    printf("Sorted array is:");
    for(rep = 0; rep < size; rep++){
        printf(" %d", arr[rep]);
    }

    //Exit Status
    return(0);
}

//Function to sort
void sort_arr(int arr[], int size){
    //Variable declarations
    int pass, rep, temp, flag;

    //Loop to count the number of processes
    for(pass = 1; pass < size ; pass++){
        flag = 0;
        for(rep = 0 ; rep < size - 1 ; rep++){
            if(arr[rep] < arr[rep + 1]){
                temp = arr[rep];
                arr[rep] = arr[rep + 1];
                arr[rep + 1] = temp;
                flag++;
            }
        }
        if(flag == 0){
            break;
        }
    }
}