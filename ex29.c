/* Write a program to create a 4x4 2D array.
 * Input 16 integers from user and fill the array.
 * Find even numbers in the array and update the even elements in the array by setting them to 0.
 * Then print your 2D array */

#include<stdio.h>
#define SIZE 4

int main(){
    //Variable declarations
    int arr[SIZE][SIZE], row, col;

    //Creating the array
    printf("Enter 16 numbers:");
    for(row = 0; row < SIZE; row++){
        for(col = 0; col < SIZE; col++){
            scanf(" %d", &arr[row][col]);
            if(arr[row][col] % 2 == 0){
                arr[row][col] = 0;
            }
        }
    }

    //Outputting the result
    printf("Result:\n");
     for(row = 0; row < SIZE; row++){
        for(col = 0; col < SIZE; col++){
            printf(" %d", arr[row][col]);
        }
        puts("");
    }
    //Exit Status
    return 0;
}