/* Lab 10
 * a program which reads an integer N from the user and counts and displays number of n-letters long strings in the provided text file
 * Name: Selin Deniz */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

int main(){
    //Variable declarations
    FILE *file = fopen("story.txt", "r");
    int size;
    char word[MAX];

    //Informing the user in the case of an error about file pointer
    if(file == NULL){

        printf(
        "Unable to open file."
        "Please check if file exists and you have read privilege.");
        
        //Portable exit status
        exit(EXIT_FAILURE);
    }
    
    //Getting the information about word size from user
    printf("Please enter the size of the word:");
    scanf("%d", &size);
    
    //Printing the header
    printf("%d - long letter strings are:", size);

    //Finding the words that matches the required size and printing them
    while(!feof(file)){
        fscanf(file, "%s", word);
        
        //Condition of matching size
        if(strlen(word) == size){
            printf("%s\t", word);
        }
    }

    //Closing the file pointer
    fclose(file);

    //Exit Status
    return 0;




}
