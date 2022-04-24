/* A function that calculate the arithmetic mean of two numbers which also outputs the result by using a pointer*/
#include<stdio.h>
//Function declarations
void get_numbers();
void find_arithmetic_mean(int number1, int number2, double *mean_arithmetic);

int main(){
   get_numbers();
}
//Function to get numbers from user
void get_numbers(){
    //Variable declaration
    int number1, number2;
    double result ;

    //Getting numbers from user
    printf("Please enter two number to calculate their arithmetic mean:");
    scanf("%d %d", &number1, &number2);

    //Function call
    find_arithmetic_mean(number1, number2, &result);

    //Output the result
    printf("The arithmetic mean of %d and %d is %.2lf", number1, number2, result);
}

//Function to calculate arithmetic mean of numbers
void find_arithmetic_mean(int number1, int number2, double *mean_arithmetic){
    *mean_arithmetic = (number1 + number2) / 2.0 ;
}