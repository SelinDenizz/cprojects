/* A program to input integer N (N<30) and N characters into an array. 
 * It will also input another character ch and remove all the occurrences of ch from the array and output it. */
#include<stdio.h>
int main(){
    //Variable declarations
    int size, repeat, rep_for_rem, rep_check, shift_rep ;
    char arr[size], ch;

    //Getting the size of array from user
    printf("Please enter size of array which should be less than thirty:");
    scanf("%d", &size);

    //Getting the character that want to be removed
    printf("Please enter the character that want to be removed from array:");
    scanf(" %c", &ch);

    //Creating array
    for(repeat = 0; repeat < size; repeat++){
        printf("Please enter %d element of array:", repeat + 1);
        scanf(" %c", &arr[repeat]);
    }

    //Removing the character from the array and shifting the elements
    for(rep_for_rem = 0; rep_for_rem < size ; rep_for_rem++){
        if (arr[rep_for_rem] == ch){
            for(shift_rep = rep_for_rem ; shift_rep < size - 1 ; shift_rep++){ //Beginning of for loop
                arr[shift_rep] = arr[shift_rep + 1];
                /*
                 * Case: In the event of the contigous presence ch in the array which should be removed
                 * Point: to embed jump up the next one if the current element is still equals to ch program should control the current element with index rep_for_rem
                 * Solution: program should assign index to one less form
                 */
                if (arr[shift_rep] == ch) {
                    rep_for_rem -= 1; }
            } //End of for loop
            size--;
        }
      }

    //Displaying the result
    printf("The elements of array that %c removed form:\n", ch);
    for(rep_check = 0 ; rep_check < size ; rep_check++){
        printf("%d element : %c \n", rep_check, arr[rep_check]);
        }
}