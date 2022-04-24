/* An exercise to transpose any size of array */
#include<stdio.h>
#define MAX 30
//Function prototype
void f_transpose(int arr[MAX][MAX], int tarr[MAX][MAX], int size, int* t_size);

//Driver function
int main(){
    //Variable declarations
    int arr[MAX][MAX]; //Original matrix
    int tarr[MAX][MAX]; //Transposed matrix
    int size, arr_rep, col, row, s_tarr;

    //Getting the size of arrays from user
    printf("Please enter the size of array:");
    scanf("%d", &size);

    //Creating arrays
    printf("Please enter the elements of the arrays:");
        for(row = 0; row < size - 1; row++){
            for(col = 0; col < size - 1; col++) {
                    scanf("%d", &arr[row][col]);
            }
        }

    //Function call
    f_transpose(arr, tarr, size, &s_tarr);

    //Printing the result
    printf("The transposed form of array:");
    for(row = 0; row < s_tarr - 1; row++){
        for(col = 0; col < s_tarr - 1; col++){
            printf(" %d", tarr[row][col]);
        }
    }

    //Return Status 
    return 0;
}

//Function to transpose
void f_transpose(int arr[MAX][MAX], int tarr[MAX][MAX], int size, int* t_size){
    //Variable declarations
    int rep, row, col;

    //Changing the elements
     for(row = 0; row < size - 1; row++){
            for(col = 0; col < size - 1; col++){
                tarr[col][row] = arr[row][col];
            }
     }

     //Returning the size of new array via pointer
     *t_size = size;
}

