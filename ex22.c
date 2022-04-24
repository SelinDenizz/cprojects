/* A program to find in the given three arrays sorted in non-decreasing order, print all common elements in these arrays.*/
#include<stdio.h>
#define MAX 30
//Function prototype
void find_common(int arr1[], int arr2[], int arr3[], int farr[], int size, int *size_of_farr);

//Driver Function
int main(){
    //Variable declarations
    int num_arr, rep_arr, arr1[MAX], arr2[MAX], arr3[MAX], farr[MAX], size, size_of_farr, rep;

    //Getting the size of arrays from user
    printf("Please enter the size of elements:");
    scanf("%d", &size);

    //Creating arrays
    printf("Please enter %d elements for each array:", size);
    for(num_arr = 0; num_arr < 3; num_arr++){
        for(rep_arr = 0; rep_arr < size; rep_arr++){
            if(num_arr == 0){
                scanf(" %d", &arr1[rep_arr]);
            }
            if(num_arr == 1){
                scanf(" %d", &arr2[rep_arr]);
            }
            if(num_arr == 2){
                scanf(" %d", &arr3[rep_arr]);
            }
        }
    }

    //Function call to find common elements in these three array
    find_common(arr1, arr2, arr3, farr, size, &size_of_farr);

    //Printing the result
    printf("The repeated elements are in these three array:");
    for(rep = 0; rep < size_of_farr; rep++){
        printf(" %d", farr[rep]);
    }

    //Exit Status
    return(0);
}

//Function to find commons
void find_common(int arr1[], int arr2[], int arr3[], int farr[], int size, int *size_of_farr){
    //Variable declarations
    int rep, rep1, rep2, j = 0;

    //Loop structure to search repeated number by comparing with the elements of array 1
    for(rep = 0 ; rep < size ; rep++){
        for(rep1 = 0 ; rep1 < size ; rep1++){
            if(arr1[rep] == arr2[rep1]){
                for(rep2 = 0; rep2 < size; rep2++){
                    if(arr3[rep2] == arr2[rep1]){
                        farr[j] = arr1[rep];
                        j++;
                    }
                }
            }
        }
    }

    *size_of_farr = j;
}