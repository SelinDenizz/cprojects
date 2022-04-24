/* A program to create 3 x 5 2D array and fill the array with the following valuea according to the values below (i = row, j = column)
 * i < j then arr[i][j] = j * i
 * i = j then arr[i][j] = j + i - 3
 * i > j then arr[i][j] = i2 - j2
 * Then print it on 3 lines */
#include<stdio.h>
#include<math.h>

#define ROW 3
#define COL 5

int main(){
    //Variable declarations
    int arr[ROW][COL], row, col;

    //Creating the array
    for(row = 0; row < ROW ; row++){
        for(col = 0; col < COL ; col++){
            if(row < col){
                arr[row][col] = row * col;
            }
            else if(row == col){
                arr[row][col] = row + col - 3;
            }
            else{
                arr[row][col] = pow(row, 2) - pow(col, 2);
            }
        }
    }

    //Printing the array
    for(row = 0; row < ROW ; row++){
        for(col = 0; col < COL ; col++){
            printf("%d", arr[row][col]);
        }
        printf("\n");
    }

    //Return Status
    return 0;
}
