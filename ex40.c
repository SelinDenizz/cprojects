/* a program which reads the numbers from the file you have created in Question 1.
 * calculates sum of the values on each line
 * stores results in “sums.txt” file */
#include<stdio.h>
#include<stdlib.h>

int main(){
    //Variable declarations
    FILE *fPtr;
    FILE *wPtr;
    int sum, num1, num2, counter = 1;

    //Opening the folder and assigning it to the pointer
    fPtr = fopen("numbers.txt", "r");
    wPtr = fopen("sums.txt", "w");


    //Case of error on the assigning file pointer
    if(fPtr == NULL){
        //Informing the user
        printf("It's not possible to open file:\n");
        printf("Please check whether the file exists or exists in the current directory.\n");
        printf("Also please check whether you have the privilege to read file or not.\n");

        //Exit Status for the portable code
        exit(EXIT_FAILURE);
    }

    //Finding sum of each line
    while(fscanf(fPtr,"%d %d", &num1, &num2) != EOF){
        //Finding sum of the values in each line
        sum = num1 + num2;

        //Outputting the sum
        fprintf(wPtr, "%d\n", sum);

    }
    
    //Closing the file pointer
    fclose(fPtr);

    //Closing the new file pointer
    fclose(wPtr);

    //Return status 
    return (0);
}