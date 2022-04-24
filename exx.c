/* A program to find and output two power operations by using two numbers */
#include<stdio.h>
//Function Prototypes
void get_nums();
void execute_operations(int x, int y, int *op1, int *op2);
int find_power(int num1, int num2);

//Main function
int main (){
    //Function call
    get_nums();

    //Exit Status
    return(0);
}

// Get numbers from user and then calls one after function to get results of operations
void get_nums(){
    // Variable declarations
    int x, y, op1, op2 ;
    printf("Please enter two integer:");
    scanf("%d %d", &x, &y);

    // Function call
    execute_operations(x, y, &op1, &op2);

    // Display the result
    printf("The result of operation one is %d, the result of operation two is %d.\n", op1, op2);
}

// Assigns result of operations to pointer for returning them one before function via calling a power function that I created
void execute_operations(int x, int y, int *op1, int *op2) {
    *op1 = find_power(x, y);
    *op2 = find_power(y, x);
}

// Self created power function 
int find_power(int num1, int num2) {
    // Variable declaration
    int result = 1, repeat ;

    // Loop structure
    for(repeat = 0 ; repeat < num2 ; ++repeat){
        result *= num1 ;
    }
    // Return value
    return result ;
}
