/* data.txt consists of three columns A, B, and C with several several lines of data
 * write a C program reads from this file and displays the average values of all three columns on each line
 * Lab 8 question 3
 * Name: Selin Deniz */
#include<stdio.h>
#include<stdlib.h>

int main(){
    //Variable declarations
    FILE *fptr = fopen(data.txt, "r");
    double sum1 = 0, sum2 = 0, sum3 = 0;
    double n1, n2, n3;
    int count = 0;

    //Case of error on the assigning file pointer
    if(fptr == NULL){
        //Informing the user
        printf("It's not possible to open file:\n");
        printf("Please check whether the file exists or exists in the current directory.\n");
        printf("Also please check whether you have the privilege to read file or not.\n");

        //Exit Status for the portable code
        exit(EXIT_FAILURE);
    }
    //Calculating the averages
    while(fscanf(fptr,"%lf %lf %lf", &n1, &n2, &n3) != EOF){
        count++;
        sum1 += n1;
        sum1 += n2;
        sum3 += n3;
    }
    
    //Outputting the result
    printf("\n Average of first column: %lf\n", sum1 / count);
    printf("\n Average of second column: %lf\n", sum2 / count);
    printf("\n Average of third column: %lf\n", sum3 / count);
    
    //Closing the file pointer
    fclose(fptr);

    //Return Status
    return 0;
}