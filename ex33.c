/* A program that reads integers into 2x3 and 3x2 dimensionals arrays.
 * And displays whether the arrays are transpose each other or not.
 * Use a function that receieves the 2d arrays as parameter and returns 1 if they're transposes, 0 otherwise. */
#include<stdio.h>
#define ROW1 2
#define COL1 3
#define ROW2 3
#define COL2 2

//Function Prototypes
int find_transpose(int arr1[ROW1][COL1], int arr2[ROW2][COL2]);

//Driver function
int main(){
    //Variable declarations
    int row, col, arr1[ROW1][COL1], arr2[ROW2][COL2];
    
    //Creating the first array in row-wise method
    for(row = 0; row < ROW1; row++){
        //Getting data from user
        printf("(Array 1) Enter %d. row:", row + 1);

        for(col = 0; col < COL1; col++){
            scanf(" %d", &arr1[row][col]);
        }
    }

    //Creating the second array in row-wise method
    for(row = 0; row < ROW2; row++){
        //Getting data from user
        printf("(Array 2) Enter %d. row:", row + 1);

        for(col = 0; col < COL2; col++){
            scanf(" %d", &arr1[row][col]);
        }
    }

    //Function call and output the result
    if(find_transpose(arr1, arr2)){
        printf("The arrays are transposes of each other.\n");
    }
    else{
        printf("They're not transposes each other.\n");
    }

    //Return type
    return 0;
}

// A function that takes 2 arrays and determines whether these arrays are transposes each other
int find_transpose(int arr1[ROW1][COL1], int arr2[ROW2][COL2]){
    //Variable declarations
    int row, col;
    int transpose = 1; //Assumes that arrays are transposed

    //Loop to check if the elements are transposed or not in row-wise method by comparing with first array
    for(row = 0; row < ROW1; row++){
        for(col = 0; col < COL1; col++){
            if(arr1[row][col] != arr2[col][row]){
                transpose-- ;
                break;
            }
        }
    }
    return transpose;
}