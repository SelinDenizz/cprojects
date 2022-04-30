/* a program which finds all pairs of numbers between 10 and 99.
 * can be expressed as “ab = ba"
 * stores the results into “numbers.txt” file
 * Lab 8 question 1
 * Name: Selin Deniz */
#include<stdio.h>
#include<stdlib.h>

int main(){
    //Variable declarations
    int num, first_dig, last_dig ;
    FILE *fptr;

    //Assigning the file pointer and creating the new file
    fptr = fopen("numbers.txt", "w");

    //Finding the numbers
    for(num = 10; num < 99; num++){
      //Finding the last digit
      last_dig = num % 10;

      //Finding the first digit
      first_dig = num / 10;

      //Outputting the numbers
      if(last_dig != 0 && last_dig != first_dig && last_dig > first_dig){
        fprintf(fptr, "%d %d\n", (last_dig * 10) + first_dig, (first_dig * 10) + last_dig);
      }
    }

    //Closing the file pointer
    fclose(fptr);
    
  //Return status
  return (0) ;
}