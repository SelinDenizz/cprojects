/* A program in which the user fills a 4x4 integer matrix and the program prints the matrix
 * along with averages of rows and columns. */
#include<stdio.h>
#define ROW 4
#define COL 4
int main(){
    //Variable declaration
    int row, col, arr[ROW][COL], sum_row, sum_col;
    float avg_row, avg_col;

    //Creating the matrix
    for(row = 0; row < ROW; row++){
        printf("Enter %d. row:", row + 1);
        for(col = 0; col < COL; col++){
            scanf(" %d", &arr[row][col]);
        }
    }
    //Printing the result
    printf("Result:\n");

    //Finding the summation of the rows and printing end of the each line
    for(row = 0; row < ROW; row++){
        sum_row = 0;
        for(col = 0; col < COL; col++){
            sum_row += arr[row][col];
            avg_row = sum_row /  ROW;
            printf(" %d", arr[row][col]);
        }
        printf(" %.1f", avg_row);
        puts("");
    }

    //Finding summation of the colums and printing it as a new row
    for(col = 0; col < COL; col++){
        sum_col = 0;
        for(row = 0; row < ROW; row++){
            sum_col += arr[row][col];
            avg_col =  sum_col / COL;
        }
        printf(" %.1f", avg_col);
    }

    //Return Status
    return 0;
}