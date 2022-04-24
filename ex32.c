/* A program to enter elements in two matrices and check whether both matrices are equal or not */
#include<stdio.h>
#define SIZE 3

//Function Prototype
int f_equality_matrices(int arr1[][SIZE], int arr2[][SIZE]);

//Driver Function
int main(){
    //Variable declarations
    int rep, row, col, arr1[SIZE][SIZE], arr2[SIZE][SIZE] ;

     //Header to inform user before creating matrices
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

    //Function call to find whether these two matrices are equal or not then inform the user
    if(f_equality_matrices(arr1, arr2)){
        printf("These two matrices are equal.\n");
    }
    else{
        printf("These two matrices are not equal.\n");
    }

    //Exit Status
    return 0;
}

//Function to find equality of two matrices
int f_equality_matrices(int arr1[][SIZE], int arr2[][SIZE]){
    //Variable declarations
    int equality = 1; //Assumes the elements are equal to each other
    int row, col;

    //Checking the elements in row-wise style
    for(row = 0; row < SIZE; row++){
        for(col = 0; col < SIZE; col++){
            if(arr1[row][col] != arr2[row][col]){
                equality = 0;
                break;
            }
        }
    }

    //Return Status
    return equality;
}