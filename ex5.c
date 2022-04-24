/* A program in C to read n number of values in an array and display it in reverse order */
#include<stdio.h>
// Function prototypes
void create_array();
void find_output_reverse(int size);

int main(){
    //Function call
    create_array();
}

//Function to create a user input sized array
void create_array(){
    //Variable declarations
    int size;

    //Getting the size of array from user
    printf("Input the number of element to store in the array:");
    scanf("%d", &size);

    //Function call
    find_output_reverse(size);
}

//Function to calculate and display the reverses and stored values in the array
void find_output_reverse(int size){
    //Variable declarations
    int repeat, arr_normal[size], arr_reverse[size], i, j;

    //Loop to assign elements to array and hold them second array for reversing process
    for(repeat = 0 ; repeat < size ; repeat++){
        printf("Element - %d:", repeat);
        scanf("%d", &arr_normal[repeat]);

        //Holding the reverse elements
        arr_reverse[size - repeat - 1] = arr_normal[repeat];
    }
    //Displaying result
        printf("The values stored in the array are:\n");
        for(i = 0 ; i < size ; i++){
            printf(" %d", arr_normal[i]);
            if(i == size - 1)
            printf("\n");
        }

        //Printing the reverses
        printf("The reverses of the values stored in the array are:\n");
        for(j = 0 ; j < size ; j++){
            printf(" %d", arr_reverse[j]);
            }
        }