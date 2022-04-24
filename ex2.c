/* Write a function that find the least number of bills which are should be multiple of 10s, 20s, 50s.
   Besides input has to be a multiple of 10$ */

#include<stdio.h>

//Function prototype
int find_num_of_bills(int amount_desired);

//Main function
int main(){
    //Variable declaration
    int num, result;

    //Getting data 
    do{
    printf("Please enter the amount desired:");
    scanf("%d", &num);
    }while(num % 10 != 0 || num < 10);

    //Function Call and assignment
    result = find_num_of_bills(num);
    
    //Output the result
    printf("The number of bills is: %d", result);

    //Exit Status
    return 0;
}

//Function find_num_of_bills
int find_num_of_bills(int amount_desired){
    if(amount_desired > 10){
        //For the case number can be divided just by 50 or not just 50 but also 20
        if((amount_desired % 50 == 0 && amount_desired % 20 != 0) || (amount_desired % 50 == 0 && amount_desired % 20 ==0)){
            return amount_desired / 50; }
        //For the case number can be divided just by 20
        else if(amount_desired % 20 == 0 && amount_desired % 50 != 0){
            return amount_desired / 20; }
        else
            return 0;
    }
    else{
        return 1;
    }
}
