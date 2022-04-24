/* Swap function example */
#include<stdio.h>

//Function Prototype
void swap_nums(int a,int b);

//Main Function
int main(){
    //Variable declaration
    int num1,num2;

    //Getting data
    printf("Input 1st number:\nInput 2nd number:");
    scanf("%d%d", &num1, &num2);

    //Function call
    swap_nums(num1,num2);

    //Exit Status
    return(0);
}

//Swap Function
void swap_nums(int a,int b){
    //Variable declaration
    int temp;

    //Printing data status
    printf("Before swapping number1 = %d number2 = %d\n", a, b);

    //Swapping
    temp = a ;
    a = b ;
    b = temp ;

    //Printing data status
    printf("After swapping number1 = %d number2 = %d", a, b);
}
