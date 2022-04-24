/* A program that hamming the distance between two arrays is the number of unequal elements of corresponding array elements.
 * Write a program to input N and N binary digits into two arrays.
 * It'll find hamming distance between two arrays. */
#include<stdio.h>
#define MAX 30
int main(){
    //Variable declarations
    int arr_1[MAX], arr_2[MAX], size, i, dist[MAX], sum = 0;

    //Getting size of arrays from user
    printf("Please enter the size of arrays:");
    scanf("%d", &size);

    //Creating arrays via loop
    for(i = 0; i < size; i++){
        printf("Please enter the %d element of the first array:", i + 1);
        scanf("%d", &arr_1[i]);
        printf("Please enter the %d element of the second array:", i + 1);
        scanf("%d", &arr_2[i]);

        //To find distance of each element of array
        if(arr_1[i] > arr_2[i]){
            dist[i] = arr_1[i] - arr_2[i];
        }
        if(arr_2[i] > arr_1[i]){
            dist[i] = arr_2[i] - arr_1[i];
        }

        //To find summation of all distances
        sum += dist[i];
    }

    //Printing the result
    printf("Hamming distance between them is: %d", sum);

    //Exit Status
    return(0);

}