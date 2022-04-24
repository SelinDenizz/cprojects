/* A program to input max 30 integers array. It'll find most frequentlyoccuring element in the array.
 * Use a function that receives an integer array and its size and returns the frequently occuring element and the number of times it occurs */
#include<stdio.h>
#define MAX 30

//Function prototypes
void f_most_freq(int arr[], int size, int *el_occur, int *num_occur);

int main(){
    //Variable declarations
    int arr[MAX], element, freq, rep, size;

    //Getting size of the array from user
    printf("Please enter the size of array:");
    scanf(" %d", &size);

    //Creating the array
    printf("Please enter the elements of array one by one:");
    for(rep = 0; rep < size; rep++){
        scanf("%d", &arr[rep]);
    }

    //Function call
    f_most_freq(arr, size, &element, &freq);

    //Printing the result
    printf("The most occured element in array is %d and occured %d times", element, freq);

    //Exit Status
    return(0);
}

//A function to find most occureed element in the array
void f_most_freq(int arr[], int size, int *el_occur, int *num_occur){
    //Variable declarations
    int rep_to_hold, rep_to_check, count , count_max = 0, el_max;

    //A loop to hold the array elements
    for(rep_to_hold = 0; rep_to_hold < size; rep_to_hold++){
        count = 1;
        //A loop to check for repeated elements
        for(rep_to_check = rep_to_hold + 1; rep_to_check < size; rep_to_check++){

            if(arr[rep_to_check] == arr[rep_to_hold]){
                count++;
                //If current element frequency is more than count max then update el_max
                if(count > count_max){
                    el_max = arr[rep_to_check];
                    count_max = count;
                }
            }
        }
    }

    //Pass by reference to max element and its frequency
    *el_occur = el_max;
    *num_occur = count_max;
}