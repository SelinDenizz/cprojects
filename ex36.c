/* A program where the user fills a 5x5 2d integer array and the program.
 * And then displays the upper triangle of this array. */
#include<stdio.h>
#define SIZE 5
//Function prototype
void f_upper_triangle(int arr[][SIZE]);

//Driver function
int main(){
    //Variable declarations
    int arr[SIZE][SIZE], row, col; 

    //Create the array
    for(row = 0; row < SIZE; row++){
        printf("Please enter %d. row:", row + 1);
        for(col = 0; col < SIZE; col++){
            scanf(" %d", &arr[row][col]);
        }
    }

    //Function call
    f_upper_triangle(arr);

    //Return Status
    return 0;
}

//Function to find upper triangle
void f_upper_triangle(int arr[][SIZE]){
    //Variable declarations
    int row, col;
    int k;

   
    //Loop to find elements which occurs upper triangle
    for(row = 0; row < SIZE; row++){
    //Loop to print spaces
        for(k=0; k<row; k++){
            printf("  ");
        }
        //Loop to print elements of array
        for(col = 0; col < SIZE; col++){
            if(col > row){
                printf("%d ", arr[row][col]);
            }
        }
        printf("\n");
    }
}