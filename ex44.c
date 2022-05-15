/* Lab 9 question 2
 * A program that inputs a string from user
 * Updates the string by removing the extra blank characters between the words
 * Name: Selin Deniz */
#include<stdio.h>
#include<string.h>
#define MAX 100
int main(){
    //Variable declarations
    char str[MAX], rep, len, rep1;

    //Getting string from user
    printf("Input a sentence:");
    gets(str);

    //Loop to find lenght of string
    while(str[rep] != '\0'){
        //Track lenght of the string
        len++;

        //Track index of string until reach the end
        rep++;
    }

    //Loop to search contigous blank characters
    for(rep = 0; rep < len; rep++){
        //If the first element is blank
        if(str[0] == ' '){

            //Delete first element and shift the array
            for(rep = 0; rep < len - 1; rep++){
                str[rep] = str[rep + 1];
                str[rep] = '\0';
                
                //Decrease size by one
                len--;
                rep = -1;
                continue;
            }
        }

        //If contigous elements are blank
        if(str[rep] == ' ' && str[rep + 1] == ' '){
         for(rep1 = rep; rep1 < (len - 1); rep1++){
            str[rep1] = str[rep1 + 1];
         }
         str[rep1] = '\0';
         len--;
         rep--;
      }
    }

    //Output the result
    printf("\nModified sentence:%s", str);

    //Exit Status
    return(0);
}