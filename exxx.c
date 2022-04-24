/* A program that takes two inputs from user then by conditions swap them or invert digits each of them */
#include<stdio.h>
// Function prototypes
void check_nums(int num1, int num2, int *res1, int *res2);
void swap_nums(int *num1, int *num2);
void invert_num(int *num);

// Function main
int main(){
    // Variable declarations
    int num1, num2, res1, res2;

    // Getting data from user
    printf("Please enter two integers:");
    scanf("%d %d", &num1, &num2);

    // Function call
    check_nums(num1, num2, &res1, &res2);

    // Printing the results
    printf("Result: %d %d", res1, res2);

    // Exit Status
    return(0);
}

// Function to check whether the first number bigger than the second one then decide which function to call -- swap or invert
void check_nums(int num1, int num2, int *res1, int *res2){
    if(num1 < num2) {
        swap_nums(&num1, &num2);
        *res1 = num1;
        *res2 = num2;
    }
    else {
        invert_num(&num1);
        invert_num(&num2);
        *res1 = num1;
        *res2 = num2;
    }
}

// Function swaps the value of numbers
void swap_nums(int *num1, int *num2){
    //Variable declaration
    int temp;

    //Swapping
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

// Function invert digits of a number
void invert_num(int *num){
    // Variable declarations
    int inverse = 0, rem;

    // Loop structure
    while(*num != 0){
        rem = *num % 10;
        inverse = inverse * 10 + rem;
        *num /= 10;
    }

    // Assigning latest form of number to the pointer
    *num = inverse;
}

