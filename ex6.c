/* A program which removes n many size of digits from a number */
#include<stdio.h>
#include<math.h>
//Function declarations
void find_processed_form(int number1, int number2, int *result);

int main(){
    //Variable declarations
    int arr_remove[5], repeat, number1, number2;

    //Loop Structure
    for(repeat = 0; repeat < 5; repeat++){
        //Getting data from user
        printf("Input an integer and number of digit to remove from it:");
        scanf("%d %d", &number1, &number2);

        //Function call
        find_processed_form(number1, number2, &arr_remove[repeat]);

        //Output the result
        printf("%d is modified as %d\n", number1, arr_remove[repeat]);
    }
}

//Function to remove number2 digits from number1 right to left and then return through parameter
void find_processed_form(int number1, int number2, int *result){
    *result = number1 / pow(10, number2);
}