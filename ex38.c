/* A program to read contents of two files and compare them character by character and line by line 
 * And then print difference line and column number */
#include<stdio.h>
#include<stdlib.h>
#define MAX 100

//Function protoype 
int comp_files(int fptr1, int fptr2, int *line, int *col);

//Driver function
int main(){
    //Variable declarations for file pointers
    FILE * fptr1, * fptr2 ;

    //Variable declarations for creating data
    char src1[MAX], src2[MAX];

    //Variable declarations for line and column informations in the case of non-equivalent files 
    int line, col, stat;

    //Creating the sources by pointing the first element of strings for read mode
    printf("Please enter the path of first and second file:");
    scanf("%s %s", src1, src2);
    
    //Open the files/sources and assigning the file pointers
    fptr1 = fopen(src1, "r");
    fptr2 = fopen(src2, "r");

    //Checking the condition of returning NULL in the case of error
    if(fptr1 == NULL || fptr2 == NULL){
        printf("It's not possible to open file:\n");
        printf("Please check whether the file exists or exists in the current directory.\n");
        printf("Also please check whether you have the privilege to read file or not.\n");

        //Exit Status for the portable code
        exit(EXIT_FAILURE);
    }

    //Function call to compare the functions
    stat = comp_files(fptr1, fptr2, &line, &col);

    //Event of determining matched files after function call
    if(stat == 0){
        printf("Both files are equal.\n");
    }

    //Event of determining distinct files after function call
    else{
        printf("Files are not equal\n");
        printf("Line: %d, col: %d\n", line, col);
    }

    //Closing the files
    fclose(fptr1);
    fclose(fptr2);

    //Return Status
    return(0);
}

//Function to determine equivalce of files by receiving two file pointers and passing the line and column info by reference in the case of non-equivalent files
//Returns 0 in succesful operation, otherwise returns -1
int comp_files(int fptr1, int fptr2, int *line, int *col){
    //Variable declarations
    char ch1, ch2;

    //Assigning the initial position of lines and columns to pointers
    *line = 1;
    *col = 0;

    //Loop to compare files by scanning character by character until each file reach to the eof 
    do{
        //Input characters
        ch1 = getc(fptr1);
        ch2 = getc(fptr2);

        //Incrementing line
        if(ch1 =='\n'){
            *line += 1;
            *col = 0;
        }

        //If characters are not same then data in files are not same therefore exit the function
        if(ch1 != ch2){
            return -1 ;
        }

    } while(ch1 != EOF && ch2 != EOF); //End of while loop

    //If both files reached end
    if(ch1 == EOF && ch2 == EOF){
        return 0 ;
    }
    else{
        return -1 ;
    }
}