/* Lab 2 question 2
 * A program to calculate summation of ith element and then assign it to the array */
#include<stdio.h>
int main(){
    //Variable declarations
    int A[50], repeat;

    //Loop structure
    for(repeat = 0; repeat < 50; repeat++){
        //Calculating and assigning ith sum
        A[repeat] = ((repeat + 1) * repeat) / 2;

        //Output the result
        printf("Generated Array\n");
        printf("A[%d] = %d\t", repeat, A[repeat]);
    }
}