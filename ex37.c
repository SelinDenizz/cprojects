/* A program to determine whether given arrays are mirrored or not */
#include<stdio.h>
#define SIZE 5 

//Function prototype
int f_mirrored(int arr[][SIZE]);

//Driver function 
int main(){
    //Variable declarations
    int row, col, arr[SIZE][SIZE];

    //Create the array
    for(row = 0; row < SIZE; row++){
        printf("Please enter %d. row:", row + 1);
        for(col = 0; col < SIZE; col++){
            scanf(" %d", &arr[row][col]);
        }
    }
    
    //Printing the array
    for(row = 0; row < SIZE; row++){
        for(col = 0; col < SIZE; col++){
            printf("%d ", arr[row][col]);
            }
          printf("\n");
    }
    
    //Function call and output the result
    if(f_mirrored(arr)){
        printf("This array is mirrored.\n");
    }
    else {
        printf("This array isn't mirrored.\n");
    }

    //Exit Status
    return 0;
}

//Function to determine whether array is mirrored
int f_mirrored(int arr[][SIZE]){
    //Variable declarations
    int row, col;

    //Determine whether mirrored by loop
    for(row = 0; row < SIZE; row++){
        for(col = 0; col < SIZE; col++){
            if(arr[row][col] != arr[col][row]){
                return 0;
                break;
            }
        }
    }

    //Event of it's mirrored
    return 1;
}