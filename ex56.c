/* A c program to check how many words in a text file is palindrome */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//Constant for the size of text file's name
#define MAX 900

//Constant for the size of word in a text file
#define MAX_WORD 200

//Function prototype
void find_palindrome(FILE *file_pointer, int *pal_word_count);
int determine_palindrome(char word[MAX_WORD]);

//Driver function
int main(){
    //Variable declarations
    FILE *fptr; //Abbrevation for file pointer
    char file_name[MAX]; //For the name of source text file
    int pal_wc; //Abbrevation for palindrome word counter

    //Getting text file name from user
    printf("Please enter targeted text files name:");
    gets(file_name);

    //Assigning the pointer to the text file
    fptr = fopen(file_name, "r");

    //Informing user in the case of error
    if(fptr == NULL){

        printf(
        "Unable to open file."
        "Please check if file exists and you have read privilege.");
        
        //Portable exit status
        exit(EXIT_FAILURE);
    }

    //Function call 
    find_palindrome(fptr, &pal_wc);

    //Outputting the result
    printf("%d words are palindrome in the %s text file.\n", pal_wc, file_name);

    //Closing the file pointer
    fclose(fptr);

    //Exit Status
    return (0);
}

//Function to find how many palindrom words exist in text file
void find_palindrome(FILE *file_pointer, int *pal_word_count) {
    //Variable declarations
    int counter = 0;
    char word[MAX_WORD];

    //Determining palindrome words
    while(!feof(file_pointer)){
        //Getting words
        fscanf(file_pointer, "%s", word);
        
        //Function call to determine whether the word is palindrome 
        if(determine_palindrome(word)){
            counter++;
        }
    }

    //Passing by reference to the result
    *pal_word_count = counter;
}

//Function to determine whether word is palindrome, returns 1 in the case of being palindrome
int determine_palindrome(char word[MAX_WORD]){
    //Variable declarations
    int len; //Refers to the lenght of the word
    int start_index, end_index;

    //Finding lenght of the word
    len = strlen(word);

    //Assigning the end index to the size - 1 of the word
    end_index = len - 1;
    start_index = 0;

    //Determining the stat of being palindrome
    while(start_index <= end_index){

        //In the case of the characters doesn't match
        if(word[start_index] != word[end_index]){
            break;
        }

        //Eliminating the controlled characters in the word by updating the indexs
        start_index++;
        end_index--;
    }

    if(start_index >= end_index){
        return 1;
    }
    else{
        return 0;
    }

}