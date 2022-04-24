/* A program that input 10 integer to array.
 * Then use a function that receieves and updates it by moving odd  numbers to the beginning and even numbers to the end of the array */
#include<stdio.h>

//Function Prototype
void mv_odd_even(int arr[], int size, int arr_new[], int *size_new);

int main(){
    //Variable declarations
    int rep, arr[10], new_size, temp[10], new_arr_size;

    //Creating array
    printf("Enter the 10 elements of array:");
    for(rep = 0; rep < 10 ; rep++){
        scanf(" %d", &arr[rep]);
    }

    //Function call
    mv_odd_even(arr, 10, temp, &new_arr_size);

    //Output the result
    printf("The new array:");
    for(rep = 0; rep < 10; rep++){
        printf(" %d", temp[rep]);
    }

    //Exit Status
    return(0);
}

//Function to moving odds to the beginning, while even numbers go to the end of array
void mv_odd_even(int arr[], int size, int arr_new[], int *size_new){
    //Variable declarations
    int temp[10], j = 0, i;
    
    //Opening new array and assign the od numbers
    for(i = 0; i < 10; i++){
        if(arr[i] % 2 == 1){
            arr_new[j] = arr[i];
            j++;
        }
    }
    
    //Opening new array and assigning even numbers
    for(i = 0; i < 10; i++){
        if(arr[i] % 2 == 0){
            arr_new[j] = arr[i];
            j++;
        }
    }
    
    //Informing driver function about new arrays size
    *size_new = 10;
}
