/* A program to reads two 4x4 dimensional arrays.
 * Transposes the first array.
 * Find negatives of second array.
 * Finds and displays summation of modified arrays */
#include<stdio.h>
#define SIZE 4
//Function prototypes
void find_transpose(int arr[][SIZE], int farr[][SIZE]);
void find_negative(int arr[][SIZE], int narr[][SIZE]);
void find_sum(int arr1[][SIZE], int arr2[][SIZE], int sarr[][SIZE]);

//Driver function
int main(){
    //Variable declarations
    int arr1[SIZE][SIZE], arr2[SIZE][SIZE], row, col, rep, farr[SIZE][SIZE], narr[SIZE][SIZE], sarr[SIZE][SIZE];

    //Getting arrays from user
    printf("Please input two array,by respectively,which have %d x %d matrices:\n", SIZE, SIZE);

    //Outer loop controls which array will be filled in row-wise manner
    for(rep = 0; rep < 2; rep++){
        for(row = 0; row < SIZE; row++){
            for(col = 0; col < SIZE; col++){
                if(rep == 0){
                    scanf(" %d", &arr1[row][col]);
                }
                else{
                    scanf(" %d", &arr2[row][col]);
                }
            }
        }
        printf("\n");
    }

    //Function call to transpose array 1
    find_transpose(arr1, farr);

    //Function call to find negative form of array 2
    find_negative(arr2, narr);

    //Function call to find summation of new arrays
    find_sum(farr, narr, sarr);

    //Return status
    return 0;
}

//Function to transpose an array
void find_transpose(int arr[][SIZE], int farr[][SIZE]){
    //Variable declarations
    int row, col ;

    //Transpose loop
    for(row = 0; row < SIZE; row++){
        for(col = 0; col < SIZE; col++){
            farr[col][row] = arr[row][col];
        }
    }

    //Outputting the result
    printf("\n Transposed form of first array is:\n");
    for(row = 0; row < SIZE; row++){
        for(col = 0; col < SIZE; col++){
            printf("%d ", farr[row][col]);
        }
        printf("\n");
    }
}

//Function to convert array to negative
void find_negative(int arr[][SIZE], int narr[][SIZE]){
    //Variable declarations
    int row, col;

    //Loop to convert negative
    for(row = 0; row < SIZE; row++){
        for(col = 0; col < SIZE; col++){
           narr[row][col] = - arr[row][col];
        }
    }

    //Outputting the result
    printf("\n Negative form of second array is:\n");
    for(row = 0; row < SIZE; row++){
        for(col = 0; col < SIZE; col++){
            printf("%d ", narr[row][col]);
        }
        printf("\n");
    }
}

//Function to sum these two new arrays and assign to a new array
void find_sum(int arr1[][SIZE], int arr2[][SIZE], int sarr[][SIZE]){
    //Variable declarations
    int row, col;
    
    //Loop to find summation
    for(row = 0; row < SIZE; row++){
        for(col = 0; col < SIZE; col++){
           sarr[row][col] = arr1[row][col] + arr2[row][col];
        }
    }

    //Outputting the result
    printf("\n Summation of these two new arrays is:\n");
    for(row = 0; row < SIZE; row++){
        for(col = 0; col < SIZE; col++){
            printf("%d ", sarr[row][col]);
        }
        printf("\n");
    }
}