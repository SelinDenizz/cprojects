/* A program in which two dynamically allocated integer arrays (whose lengths are specified by the user) are filled by the user
 * Checks if all numbers in the second array is available in the first array
 * Assume length of the second array is always shorter than the first one
 */
#include<stdio.h>
#include<stdlib.h>
//Driver function
int main(void){
    //Variable declarations
    int *arr1, *arr2, rep, rep2, flag = 0, size1, size2, num1, num2;

    //Getting the size of first array
    printf("Enter length of the first array:");
    scanf("%d", &num1);

    //Dynamically creating the first array
    size1 = num1 * sizeof(int);
    arr1 = (int*)malloc(size1);

    //Getting elements of first array from user
    printf("Enter numbers for first array:");
    for(rep = 0; rep < num1; rep++){
        scanf("%d", &arr1[rep]);
    }

    //Getting the size of second array
    printf("Enter length of the second array:");
    scanf(" %d", &num2);

    //Dynamically creating the first array
    size2 = num2 * sizeof(int);
    arr2 = (int*)malloc(size2);

    //Getting elements of first array from user
    printf("Enter numbers for first array:");
    for(rep = 0; rep < num2; rep++){
        scanf(" %d", &arr2[rep]);
    }

    //Determining whether first element include elements of second array
    for(rep = 0; rep < num2; rep++){
        for(rep2 = 0; rep2 < num1; rep2++){
            if(arr1[rep2] == arr2[rep]){
                flag++;
            }
        }
    }

    //Outputting the result
    if(flag == num2){
        printf("First array contains second array.\n");
    }
    else{
        printf("First array doesn't contain second array.\n");
    }
    
    //Free unnecessary storage space 
    free(arr1);
    free(arr2); 
    
    //Exit Status
    return(0);

}