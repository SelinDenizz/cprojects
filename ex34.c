/* Write a program that reads integers into 3x3 2 dimensional array 
 * And a multiplication factor from user.
  The program must print 3Fx3F matrix on the screen. */
#include<stdio.h>
#define ROW 3
#define COL 3
//Function protoype
void f_multip_form(int arr[][COL], int factor);

//Driver Function
int main(){
    //Variable declaration
    int arr[ROW][COL], row, col, factor;

    //Creating the array via getting data from user in row-wise style
    for(row = 0; row < ROW; row++){
        //Informing the user to get data of row
        printf("Please enter %d. row:", row + 1);

        for(col = 0; col < COL; col++){
            scanf(" %d", &arr[row][col]);
        }
    }
    
    //Getting the multiplication factor from user
    printf("Please enter the multiplication factor:");
    scanf("%d", &factor);
    
    //Function call to find multiplied size form of the array
    f_multip_form(arr, factor);

    //Exit Status
    return 0;
}

//Function to expand the size of the given array
void f_multip_form(int arr[][COL], int factor){
    //Variable declarations
    int row, col, rep, rep2;

    for(row = 0; row < ROW; row++){
        for(rep2 = 0; rep2 < factor; rep2++){
            for(col = 0; col < COL; col++){
                for(rep = 0; rep < factor; rep++){
                    printf(" %d", arr[row][col]);
                }
            }
            printf("\n");
         }
       }
    }