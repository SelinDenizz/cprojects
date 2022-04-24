/* A program to read elements in two matrices and add elements of both matrices */
#include<stdio.h>
#define SIZE 3

//Function Prototypes
void find_sum_matrices(int arr1[][SIZE], int arr2[][SIZE], int farr[][SIZE], int* f_size);

//Driver function
int main() {
    //Variable declarations
    int arr1[SIZE][SIZE], arr2[SIZE][SIZE], farr[SIZE][SIZE], farr_size, rep, row, col;

    //Header to inform user
    printf("Please input two array,by respectively,which have %d x %d matrices:\n", SIZE, SIZE);

    //Outer loop assigns which array will be filled
    for(rep = 1; rep < 3; rep++){

        //Inner function will be filled the choosen array which is row-wise
        for(row = 0; row < SIZE; row++){
            for(col = 0; col < SIZE; col++){

                //For the first matrix
                if(rep == 1){
                    scanf("%d", &arr1[row][col]);
                }

                //For the second matrix
                else{
                    scanf("%d", &arr2[row][col]);
                }
            }
        }
        printf("\n");
    }

    //Function call to sum these matrices and find a final matrix
    find_sum_matrices(arr1, arr2, farr, &farr_size);

    //Output the summed form array
    printf("Sum of the both matrices:\n");
    for(row = 0; row < SIZE; row++){
            for(col = 0; col < SIZE; col++){
                printf("%d ", farr[row][col]);
            }
            printf("\n");
        }

    //Return type
    return 0;
}

//A function which takes two matrices to sum and find a final matrix 
void find_sum_matrices(int arr1[][SIZE], int arr2[][SIZE], int farr[][SIZE], int* f_size){
    //Variable declarations
    int row, col;

    //Loop to find and assign the sum of the two array elements to the final array in a row-wise style
    for(row = 0; row < SIZE; row++){
        for(col = 0; col < SIZE; col++){
            farr[row][col] = arr1[row][col] + arr2[row][col];
        }
    }

    //Assigning the size of new array to inform the driver function via pointer f_size
    *f_size = SIZE * SIZE;
}

