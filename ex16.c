/* An example to count the total occurrences of any number in the given array. 
 * We will make a function (frequency) to check the frequency of each element in the array.  */
#include<stdio.h>
#define MAX 100
//Function prototype
void find_frequency(int arr[], int size, int *num);

int main(){
    //Variable declarations
    int arr[MAX], size, repeat, result;

    //Getting the size from user
    printf("Please enter the size of array:");
    scanf(" %d", &size);

    //Creating the array
    printf("Please enter the elements of array one by one:");
    for(repeat = 0; repeat < size; repeat++){
        scanf("%d", &arr[repeat]);
    }

    //Function call
    find_frequency(arr, size, &result);

    //Return statement
    return(0);
}

//Function to find frequeny of desired number
void find_frequency(int arr[], int size, int *num){
    //Variable declarations
    int des_num, rep, count_freq = 0;

    //Getting the desired number from user
    printf("Please enter the number which will be searched:");
    scanf("%d", &des_num);

    //Searching for desired number
    for(rep = 0 ; rep < size ; rep++){
        if(arr[rep] == des_num)
            count_freq++ ;
    }
    printf("The number %d repeated %d many times in the array.\n", des_num, count_freq);
}
