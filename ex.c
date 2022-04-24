/* A program to get a letter and decide whether uppercase or lowercase for 20 times */
 #include<stdio.h>
 //Function prototypes
 void get_letter();
 void find_upper_or_lower(char letter, int *answer);

 //Function main
 int main(){
     //Function call
     get_letter();

     //Exit Status
     return(0);
 }

 // Gets letter from user and then call another function to decide whether letter is uppercase or lowercase, then displays the result
 void get_letter(){
     //Variable declarations
     int repeat, result ;
     char ch;

     //Getting input from user
     for(repeat = 0; repeat < 20; ++repeat){
         printf("Please enter a letter:");
         scanf(" %c", &ch);

         //Function call
         find_upper_or_lower(ch, &result);

         //Decision structures
         if(result)
             printf("The letter %c is uppercase\n", ch);
         else
             printf("The letter %c is lowercase\n", ch);
     }
     printf("Executed succesfully, thanks!\n");
 }
 
 // Determines whether the letter is upper or lowercase then return it via pointer
 void find_upper_or_lower(char letter, int *answer) {
     // Decision Structure
     if('A' <= letter && letter <= 'Z')
         *answer = 1 ;
     else
         *answer = 0 ;
 }