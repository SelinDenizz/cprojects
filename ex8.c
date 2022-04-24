/* Lab 2 question 3
 * A program that inputs 10 real numbers into an array and an integer n. It will rotate the elements of the array n times to the right */
#include<stdio.h>
int main(){
    //Variable declarations
    int arr[10], repeat, n, shift_repeat, i, temp, j;

    //Creating the 10 size array
    for(repeat = 0; repeat < 10; repeat++){
        printf("Please enter the %d element of array:", repeat + 1);
        scanf("%d", &arr[repeat]);
    }

    //Getting the repeat number
    printf("Please enter a number which will determine how many times number will be shifted:");
    scanf("%d", &n);

    //Shifting elements of array n times to right via nested for loops
    for(shift_repeat = 0; shift_repeat < n; shift_repeat++){
        temp = arr[9];
        for(i = 9 ; i > 0; i--){
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;

    }
    //Checking and printing the latest form of array
    for(j = 0; j < 10; j++){
        printf(" %d", arr[j]);
    }  
}
