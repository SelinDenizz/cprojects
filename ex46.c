/* Lab 10 question 2
 * a program which opens the provided text file and counts and displays number of words in each line
 * Name: Selin Deniz */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1000

int main(){
    //Variable declarations
    int number, count = 0, rep, len, l_counter = 0, w_counter = 0;
    char str[MAX];
    FILE *file = fopen("story.txt"," r");

    //Informing user in the case of error
    if(file == NULL){

        printf(
        "Unable to open file."
        "Please check if file exists and you have read privilege.");
        
        //Portable exit status
        exit(EXIT_FAILURE);
    }
    
    //Finding number of word for each line
    while(!feof(file)){
        //Getting the words in the string form
        fgets(str, MAX + 1, file);

        //Tracking the number of line
        count++;

        //Finding the lenght and assign
        len = strlen(str);
        
        //Searching for a word
        for(rep = 0; rep < len; rep++){
            //In the case of reaching null character or space
            if(str[rep] == ' ' || str[rep] == '\0'){
                w_counter++;
            }
        }

        //Outputting the result
        printf("line %d: %d words\n", count, w_counter + 1);
    }

    //Closing the file pointer
    fclose(file);
    
    //Exit Status
    return 0;
}