/* Lab 5 question 1
 * A program to input max 20 elemet of array.
 * It'll find and output nonrepeating element in the array.
 * Use a function that receieves an array an its size, then returns another array that includes nonrepeating element of array. */

#include<stdio.h>
#define MAX 20
//Function prototype
void find_non_rep(int arr[], int size, int farr[], int *fsize);

//Driver function
int main(){
    //Variable declarations
    int arr[MAX], farr[MAX], rep, size, fsize=0;

    //Getting the size of the array from user
    printf("Please enter n:");
    scanf("%d", &size);

    //Creating the array
    printf("Please enter %d integers:", size);
    for(rep = 0; rep < size ; rep++){
        scanf("%d", &arr[rep]);
    }

    //Function call
    find_non_rep(arr,size, farr, &fsize);

    //Printing the result
    printf("The new array:");
    for(rep = 0; rep < fsize ; rep++){
        printf("%d ", farr[rep]);
    }


    //Exit Status
    return(0);
}

//Function to find nonrepeating elements 
void find_non_rep(int arr[], int size, int farr[], int *fsize) {
    //Variable declarations
    int rep1, rep2, j = 0, control, counter;

    //Checking if the element is repeated in the array
    for(rep1 = 0; rep1 < size; rep1++){
        control = 1;
        counter = 0;
        for(rep2 = 0; rep2 < size; rep2++){
            if(arr[rep1] == arr[rep2] ){
                counter++;
                if(counter > 1){
                    control = 0;
               }
            }
            
        }
        if(control){
                farr[j] = arr[rep1];
                j++;
            }
    }

    //Returning the new array size to the main function by passing reference
    *fsize = j;
}