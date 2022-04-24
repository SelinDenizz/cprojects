/* A program input 10 elements into an array of size 30. 
 * Then it'll input another integer and its required location from user.
 * Program will insert that value to the required location.
 * Use a function that receieves an integer array and its size. 
 * It inputs another integer and its required location from user and inserts that value to the required location in the array.
 * Then returns updated array to the calling function. */
#include<stdio.h>
#define MAX 30

//Function Prototypes
void create_inserted_arr(int arr[], int size, int *new_size);

int main(){
    //Variable declarations
    int rep_arr, arr[MAX], new_size;

    //Creating the array
    printf("Please enter 10 integers:");
    for(rep_arr = 0; rep_arr < 10; rep_arr++){
        scanf(" %d", &arr[rep_arr]);
    }
    
    //Function call
    create_inserted_arr(arr, 10, &new_size);

    //Output the result
    printf("The new array:");
    for(rep_arr = 0; rep_arr < new_size; rep_arr++){
        printf(" %d", arr[rep_arr]);
    }

    //Exit Status
    return(0);
}

//Function to create array with inserted value
void create_inserted_arr(int arr[], int size, int *new_size){
    //Variable declarations
    int rep, value, loc, temp, i;

    //Getting the value that desired to be inserted in the array
    printf("Please enter the value that will be inserted in the array and its location:");
    scanf(" %d %d", &value, &loc);
    
    //To match correctly with the index number of array
    loc--; 

    //Adding one element to the size
    *new_size = size + 1;

    //Scanning the array to find and replace the desired value
    for(rep = 0 ; rep < size; rep++){
        if(rep == loc){
            for(i = 10 ; i > loc ; i--){
                arr[i] = arr[i - 1];
            }
            arr[rep] = value;
        }
    }
}

