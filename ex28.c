/* Write a program in which the user fills a 3 x 5 integer matrix
 * Then program prints the matrix along with sums of rows and columns */
#include<stdio.h>
#define ROW 3
#define COL 5
int main(){
    //Variable declaration
    int row, col, arr[ROW][COL], sum_row, sum_col;

    //Creating the matrix
    for(row = 0; row < ROW; row++){
        printf("Enter %d. row:", row + 1);
        for(col = 0; col < COL; col++){
            scanf(" %d", &arr[row][col]);
        }
    }
    //Printing the result
    printf("Result:");

    //Finding the summation of the rows and printing end of the each line
    for(row = 0; row < ROW; row++){
        sum_row = 0;
        for(col = 0; col < COL; col++){
            sum_row += arr[row][col];
            printf("%d", arr[row][col]);
        }
        printf("%d", sum_row);
        puts("");
    }

    //Finding summation of the colums and printing it as a new row
    for(col = 0; col < COL; col++){
        sum_col = 0;
        for(row = 0; row < ROW; row++){
            sum_col += arr[row][col];
        }
        printf("%d", sum_col);
    }

    //Return Status
    return 0;
}