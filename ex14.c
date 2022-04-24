/* A program that inputs 10 integers into the array and determines whether it'a ascending order or not  */
#include<stdio.h>
#define SIZE 10
int main(){
    //Variable declarations
    int arr[SIZE], counter = 0, i, j;

    //Creating the array
    for(j = 0; j < SIZE; j++){
        printf("Please enter the %d element of array:", j + 1);
        scanf("%d", &arr[j]);
    }

    //Checking whether ascending or descending
    for(i = 0; i < SIZE; i++){
       if(arr[i + 1] > arr[i])
           counter++;
    }

    //Check if all elements are incresing by upgrading the counter by 1 in each check
    if(counter == 9){
        printf("Numbers are ascending order.\n");
    }
    else{
        printf("Numbers are not ascending order.\n");
    }
}