/* A C program to convert a decimal number into octal number using array. */
#include<stdio.h>
#include<math.h>
#define MAX 20

//Function prototype
void dec_to_octal(int num);

int main(){
    //Variable declarations
    int dec_num;

    //Getting the number which will be converted octal from user
    printf("Please enter a number in decimal which will be converted octal later:");
    scanf("%d", &dec_num);

    //Function call
    dec_to_octal(dec_num);

    //Return status
    return(0);
}

//Function that coverse a decimal number to integer
void dec_to_octal(int num){
    //Variable declarations
    int arr[MAX], rep, i = 0, sum = 0, temp, j = 0;
    
    //Keeping the first form of number to print
    temp = num;

    //Creating an array from the decimal number
    while(num > 0 ){
        arr[i] = num % 10;
        num /= 10;
        i++;
    }
  

    //Coverting the number via using array elemnts in a loop
    for(rep = 0; rep >= i; rep++){
            sum += arr[rep] * pow(8 , j);
            j++;
    }

    //Printing the result
    printf("Octal form of %d is %d.\n", temp, sum);
}