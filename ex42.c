/* A phone selling company which calls as ABC has 4 stores around the city.
 * And each store sells 8 different type of cell phone.
 * Data about these branches, cell phone types and their quantity will be stored in a text file which is data.txt for this case.
 * And these program works to manipulate the text file by the will of manager/user until he/she/they decide to quit.
 */
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
#define ROW 32
#define COL 4

//Function Prototypes
void get_menu_and_choice(void);
void perform_operation(int preference);
void find_two_dim_arr(int arr_data[MAX][COL]); //Function 1 
void sel_sort_arr_data(int arr_data[MAX][COL], int row_size); //Function 2
void get_info_to_update(void); //Function 3
void find_quantity_updated_form(int arr_data[MAX][COL], int row_size, int new_qn, int str_id, int ph_type); //Function 3
void bub_sorted_arr_data(int arr_data[MAX][COL], int row_size); //Function 4
void find_cheapest(int arr_data[MAX][COL], int row_size); //Function 5
void find_uncommon(int arr_data[MAX][COL], int row_size, int arr_uncom[MAX], int* size_uncom); //Function 6
void find_common(int arr_data[MAX][COL], int row_size, int arr_comm[MAX], int* size_comm); //Function 7
void find_tot_phn_type(int arr_data[MAX][COL], int row_size); //Function 8
void save_latest_update(int arr_data[MAX][COL], int row_size); //Function 9

//Driver function
int main(void){

    //Calling the menu printing function
    get_menu_and_choice( );

    //Return Status
    return (0);
}

//Function to display the menu and recieving the preference of command belong to user and assigning the answer to a variable
void get_menu_and_choice( ){
    //Variable declaration
    int choice;
    
    //Printing the menu until the user quit
    do{
        //Printing the header
        printf(
        "Welcome to ABC Mobile Phone\n"
        "-----MENU-----\n"
        "Choose one:\n");
    
        //Printing the options
        printf( 
        " 1. Load phone data from text file\n"
        " 2. Order data based on phone quantity\n"
        " 3. Update phone quantity for a store\n"
        " 4. View ordered phone quantity of a store\n"
        " 5. Find cheapest price of a phone type\n"
        " 6. Compare two stores to find different phone types\n"
        " 7. Compare two stores to find common phone types\n"
        " 8. View total quantity of each phone type\n"
        " 9. Update text file\n"
        " 10. Quit\n");

         //Getting information about which operation will be applied 
        printf(" Make your choice:");
        scanf("%d", &choice);
        
        //Function call to perform operations based on preference of user
        perform_operation(choice);

    } while(choice != 10);
}

//Function to call other functions to perform required tasks by receiving the menu preference as parameter
void perform_operation(int preference){
    //Variable declarations 
    int arr_data[MAX][COL] ;
    int row_size = ROW;
    int call_option;
    int arr_uncom[MAX], size_uncom;
    int arr_comm[MAX], size_comm;
    int save_op;

    switch (preference) {
        /*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
        //Loading phone data from text file
        case 1:
        find_two_dim_arr(arr_data); 
        break;
        /*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

        //Find selection sorted form
        case 2:
        //Inform the user for embedding unexpected result in a way that calls function 1
        printf("To get accurate result it'd be better to load data, if you want to load data please enter 1 otherwise 0.\n");
        scanf("%d", &call_option);
        
        //If user want to call that function
        if(call_option == 1){
        find_two_dim_arr(arr_data);
        }

        //Function call the main function which will be sort the data
        sel_sort_arr_data(arr_data, row_size);

        //Inform the user about saving the new array 
        printf("To save sorted data, please enter 9.\n");
        scanf("%d", &save_op);

        //If user want to call that function
        if(save_op == 9){
            save_latest_update(arr_data, row_size);
        }
        break;
        /*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

        //Update phone quantity for a store
        case 3: get_info_to_update();
        break;
        /*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

        //View ordered phone quantity of a store
        case 4: 
        //Inform the user for embedding unexpected result in a way that calls function 1
        printf("To get accurate result it'd be better to load data, if you want to load data please enter 1 otherwise 0.\n");
        scanf("%d", &call_option);
   
        //If user want to call that function
        if(call_option == 1){
        find_two_dim_arr(arr_data);
        }

        //Function call the main function which will be sort the data
        bub_sorted_arr_data(arr_data, row_size);

        break;
        /*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

        //Find cheapest price of a phone type
        case 5:
        //Inform the user for embedding unexpected result in a way that calls function 1
        printf("To get accurate result it'd be better to load data, if you want to load data please enter 1 otherwise 0.\n");
        scanf("%d", &call_option);

        //If user want to call that function
        if(call_option == 1){
        find_two_dim_arr(arr_data);
        }

        //Function call the main function which will find the cheapest phone between stores
        find_cheapest(arr_data, row_size); 
        break;
        /*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

        //Compare two stores to find different phone types
        case 6:
        //Inform the user for embedding unexpected result in a way that calls function 1
        printf("To get accurate result it'd be better to load data, if you want to load data please enter 1 otherwise 0.\n");
        scanf("%d", &call_option);

        //If user want to call that function
        if(call_option == 1){
        find_two_dim_arr(arr_data);
        }

        //Function call to the main function to find uncommon phone types between two store
        find_uncommon(arr_data, row_size, arr_uncom, &size_uncom);
        break;
        /*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

        //Compare two stores to find common phone types
        case 7:
        //Inform the user for embedding unexpected result in a way that calls function 1
        printf("To get accurate result it'd be better to load data, if you want to load data please enter 1 otherwise 0.\n");
        scanf("%d", &call_option);

        //If user want to call that function
        if(call_option == 1){
        find_two_dim_arr(arr_data);
        }

        //Function call to the main function to find common phone types between two store
        find_common(arr_data, row_size, arr_comm, &size_comm);
        break;
        /*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

        //View total quantity of each phone type
        case 8:
        //Inform the user for embedding unexpected result in a way that calls function 1
        printf("To get accurate result it'd be better to load data, if you want to load data please enter 1 otherwise 0.\n");
        scanf("%d", &call_option);
        
        //If user want to call that function
        if(call_option == 1){
        find_two_dim_arr(arr_data);
        }

        //Function call to the main function which finds and outputs total phone type in all stores
        find_tot_phn_type(arr_data, row_size);
        break;
        /*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

        //Quit
        case 10: break;
        /*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

        //Default case
        default: 
        break;
    }
}

/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
//Function that reads data from phonedata.txt into 2-D array and returns it to the calling function
void find_two_dim_arr(int arr_data[MAX][COL]){
    //Variable declarations
    FILE *fptr = fopen("phonedata.txt", "r");
    int row , col;

    //Case of error on the assigning file pointer
    if(fptr == NULL){
        //Informing the user
        printf("It's not possible to open file:\n"
        "Please check whether the file exists or exists in the current directory.\n"
        "Also please check whether you have the privilege to read file or not.\n");

        //Exit Status for the portable code
        exit(EXIT_FAILURE);
    }
    
    //Scanning the data in the text file to store in two dimensional array in row-size manner
    while(!feof(fptr)){
            for(row = 0; row < ROW; row++){
                for(col = 0; col < COL; col++){
                    fscanf(fptr, "%d", &arr_data[row][col]);
            }
        }
    }

    //Closing the file pointer
    fclose(fptr);

    //Informing the user
    printf("Data is read succesfully!\n");
}

/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
//Function orders the array , which include stores phone data and its row size, based on phone quantity using the selection sort algorithm
void sel_sort_arr_data(int arr_data[MAX][COL], int row_size){
    //Variable declaration
    int rep_to_cmpr, rep_to_be_cmpr, temp, rep_to_swap, row, col; 

    //Comparing the element with the other element
    for(rep_to_be_cmpr = 0; rep_to_be_cmpr < row_size - 1; rep_to_be_cmpr++){

        //Comparing process with other elements
        for(rep_to_cmpr = rep_to_be_cmpr + 1 ; rep_to_cmpr < row_size; rep_to_cmpr++){
            
            //If an element found less than the one is compared then swap them
            if(arr_data[rep_to_be_cmpr][2] < arr_data[rep_to_cmpr][2]){

                //Swapping the whole row
                for(rep_to_swap = 0; rep_to_swap < 4; rep_to_swap++){
                    temp = arr_data[rep_to_be_cmpr][rep_to_swap];
                    arr_data[rep_to_be_cmpr][rep_to_swap] = arr_data[rep_to_cmpr][rep_to_swap];
                    arr_data[rep_to_cmpr][rep_to_swap] = temp;
                }
            }
        }
    }

    //Output the header
    printf(
    "Sorted array based on phone quantity\n"
    "Store_id   Phone_type   quantity     price\n");
    
    //Output the array
    for(row = 0; row < row_size; row++){
        for(col = 0; col < COL; col++){
            printf("%-12d", arr_data[row][col]);
        }
        puts(" ");
    }
}

/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
//Function to get information from user about store id, phone type and new quantity information for updating the related element row in the array via function call to another function
void get_info_to_update(void){
    //Variable declaration to get store id, phone type and quantity by respectively
    int str_id, ph_type, new_qn;
    int arr_data[ROW][COL], call_option ,row_size = ROW, check = 0, rep_to_ch;
    
    do{
        //Getting info from user
        printf("Please enter store id, phone type and its new quantity by respectively: ");
        scanf("%d%d%d", &str_id, &ph_type, &new_qn);

        //Check whether values are valid
        for(rep_to_ch = 0; rep_to_ch < row_size; rep_to_ch++){
            if(arr_data[rep_to_ch][0] == str_id && arr_data[rep_to_ch][1] == ph_type){
                check++;
            }
        }
        
        //Function call to load data
        printf("To get accurate result it'd be better to load data, if you want to load data please enter 1 otherwise 0.\n");
        scanf("%d", &call_option);
        if(call_option == 1){
            find_two_dim_arr(arr_data);
        }

        //Function call to update data by new quantity
        if(check != 0){
            find_quantity_updated_form(arr_data, row_size, new_qn, str_id, ph_type);
        }
        //Informing the user in the case of invalid data
        else {
            printf("Invalid data, please try again and check the text file.\n");
        }
        
    } while (check == 0);
}

/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
//Function to be used one before function to update data
void find_quantity_updated_form(int arr_data[MAX][COL], int row_size, int new_qn, int str_id, int ph_type){
    //Variable declarations
    int row, col, counter = 0, save_op;

    //Function to find related row to update 
    for(row = 0; row < row_size; row++){

        //If store id and phone type matches update related element
        if(arr_data[row][0] == str_id){
            if(arr_data[row][1] == ph_type){
                arr_data[row][2] = new_qn;
            }
        }
    }

    //Output the header
    printf(
    "Updated form of the array with the new quantity:\n"
    "Store_id   Phone_type   quantity      price\n");

    //Output the resulted array
    for(row = 0; row < row_size; row++){
        for(col = 0; col < COL; col++){
            printf("%-13d", arr_data[row][col]);
        }
        puts(" ");
    }

    //Inform the user about saving the new array 
        printf("To save sorted data, please enter 9.\n");
        scanf("%d", &save_op);

        //If user want to call that function
        if(save_op == 9){
            save_latest_update(arr_data, row_size);
        }
}

/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
//Function to find buble sorted form of the array which inputs store id, outputs the sorted phone quantity and prices of that stores
void bub_sorted_arr_data(int arr_data[MAX][COL], int row_size){
    //Variable declarations
    int str_id, pass, rep, row, narr[ROW][COL], row_narr = 0, flag, temp, col_narr;

    //Getting the id of the store from user
    do{
        printf("Please enter the id of the store to sort bubble:");
        scanf("%d", &str_id);

        //Finding the related stores by id
        for(row = 0; row < row_size; row++){
            if(arr_data[row][0] == str_id){
    
                //Assigning the quantities 
                narr[row_narr][0] = arr_data[row][2];

                //Assigning the prices 
                narr[row_narr][1] = arr_data[row][3];

                //Upgrading the row number of new array 
                row_narr++;
            }
        }
        
        //Valid case
        if(row_narr != 0){
            //Bubble sort the data which is the 0th colum of array 
            for(pass = 1; pass < row_narr ; pass++){
                //To embed trying to sort already sorted element
                flag = 0;

                for(rep = 0 ; rep < row_narr - 1 ; rep++){

                    //Swapping the elements of array which denote quantities
                    if(narr[rep][0] > narr[rep + 1][0]){
                        temp = narr[rep][0];
                        narr[rep][0] = narr[rep + 1][0];
                        narr[rep + 1][0] = temp;

                        //If element unsorted then increment flag value by one
                        flag++;
                    }
                }

                //If element is sorted already then cease the loop
                if(flag == 0){
                    break;
                }
            }
            //Output the header
            printf(
            "The bubble sorted form of stores with the given id is:\n"
            "Store_id     Quantity     Price\n");

            //Output the array
            for(row = 0; row < row_narr; row++){
                //Output the store id
                printf("%-13d", str_id);

                //Output the quantity and price of related store
                for(col_narr = 0; col_narr < 2; col_narr++){
                    printf("%-13d", narr[row][col_narr]);
                }
                puts(" ");
            }
        }

        //Informing the user in the case of invalid data
        else {
            printf("Invalid data, please try again and check the text file.\n");
        }
    } while(row_narr == 0); //Until user input valid value
}

/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
//Function that inputs phone type and finds and outputs the store id that has cheapest price for that phone type
void find_cheapest(int arr_data[MAX][COL], int row_size){
    //Variable declarations
    int row, ph_type;
    int min_prc, min_str; //Minimum price in the entire data and store that sells that type of phone with minimum price
    int counter = 0; //To check whether phone type exists in data file or not

    do{
        //Invalid case
        if(counter == 0){
            printf("Invalid data, please try again.\n");
        }

        //Valid case
        else{
            //Getting phone type that will be searched from user
            printf("Enter phone type:");
            scanf("%d", &ph_type);

            //Possibilty of entering non-existed phone type
            for(row = 0; row < row_size; row++){
                if(arr_data[row][1] == ph_type ){
                    counter++;
                }
            }

            //Initializing minimum price, store that hold this price 
                min_prc = arr_data[0][3];
                min_str = arr_data[0][0];

            //Searching for minimum price
            for(row = 1; row < row_size; row++){
                if(arr_data[row][1] == ph_type && arr_data[row][3] < min_prc){
                    min_prc = arr_data[row][3];
                    min_str = arr_data[row][0];
                }
            }

            //Output the result
            printf("Cheapest Phone %d is at store %d. (price: %d)\n", ph_type, min_str, min_prc);
        }
    } while(counter == 0);
}

/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
//Function that receives 2D array and row size, inputs store id1 and store id2, return 1D array that contains phone types that are available in store 1 and not in store 2.
void find_uncommon(int arr_data[MAX][COL], int row_size, int arr_uncom[MAX], int* size_uncom){
    //Variable declarations
    int str_id1, str_id2, count1 = 0, count2 = 0, row, rep, index = 0 , check;

    //For store 2 to compare with store 1
    int index_cmpr2 = 0, arr_cmpr2[MAX];

    //For store 1 to compare with store 2
    int index_cmpr1 = 0, arr_cmpr1[MAX];

    //Getting store ids from user while user inputting accurate ID's
    do{
        printf("Enter store ID's: ");
        scanf(" %d %d", &str_id1, &str_id2);
        
        //For controlling each phone type element of store 1
        for(row = 0; row < row_size; row++){

                //If any element is found that has store id for store 1 
                if(arr_data[row][0] == str_id1){
                    count1++;

                    //Assign elements to temporary location for comparing with the phone type elements of store 2
                    arr_cmpr1[index_cmpr1] = arr_data[row][1];
                    index_cmpr1++; //Index_cmp will be equal to count1
                }

                //If any element is found that has store id for store 2 
                if(arr_data[row][0] == str_id2){
                    count2++;

                    //Assign phone types in store 2 to an array for comparing with the ones in the store 1
                    arr_cmpr2[index_cmpr2] = arr_data[row][1];
                    index_cmpr2++; //Index_cmpr will be equal to count2
                }
        }

        //Determining whether they've common elements or not via comparing each phone type element of store 1 by store 2
        for(row = 0; row < count1; row++){
            //If elements aren't common
            check = 0;

            //For phone type elements of store 2
            for(rep = 0; rep < count2; rep++){
                if(arr_cmpr2[rep] == arr_cmpr1[row]){
                    check++;
                    break;
                }
            }

            //If element is unique to store 1
            if(check == 0){

                //Assign the element permanent location or aka array which will be retuned
                arr_uncom[index] = arr_cmpr1[row];
                index++;
            }

        }

        //Assigning the pointer which denotes size of new array
        *size_uncom = index;

        //Outputting the result
        if(count1 == 0 || count2 == 0){
            printf("Invalid data, please try again to enter valid store ID's.\n");
        }

        //Valid case 
        else{
            for(rep = 0; rep < index; rep++){
                if(rep == 0){
                    printf("The phone type only available in store with ID %d are:", str_id1); //To print header only once without distrupting if else structure
                }
                printf("%d ", arr_uncom[rep]);
            }
            puts(" ");
        }
    } while(count1 == 0 || count2 == 0);
}

/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
//Function inputs ID's of store1 and store2 to find and return common phone type in these stores within 1D array also it receieves 2D array and row size
void find_common(int arr_data[MAX][COL], int row_size, int arr_comm[MAX], int* size_comm){
     //Variable declarations
    int str_id1, str_id2, count1 = 0, count2 = 0, row, rep, index = 0 , check;

    //For store 2 to compare with store 1
    int index_cmpr2 = 0, arr_cmpr2[MAX];

    //For store 1 to compare with store 2
    int index_cmpr1 = 0, arr_cmpr1[MAX];

    //Getting store ids from user while user inputting accurate ID's
    do{
        printf("Enter store ID's: ");
        scanf(" %d %d", &str_id1, &str_id2);
        
        //For controlling each phone type element of store 1
        for(row = 0; row < row_size; row++){

                //If any element is found that has store id for store 1 
                if(arr_data[row][0] == str_id1){
                    count1++;

                    //Assign elements to temporary location for comparing with the phone type elements of store 2
                    arr_cmpr1[index_cmpr1] = arr_data[row][1];
                    index_cmpr1++; //Index_cmp will be equal to count1
                }

                //If any element is found that has store id for store 2 
                if(arr_data[row][0] == str_id2){
                    count2++;

                    //Assign phone types in store 2 to an array for comparing with the ones in the store 1
                    arr_cmpr2[index_cmpr2] = arr_data[row][1];
                    index_cmpr2++; //Index_cmpr will be equal to count2
                }
        }

        //Determining whether they've common elements or not via comparing each phone type element of store 1 by store 2
        for(row = 0; row < count1; row++){
            //If elements aren't common
            check = 0;

            //For phone type elements of store 2
            for(rep = 0; rep < count2; rep++){
                if(arr_cmpr2[rep] == arr_cmpr1[row]){
                    check++;
                }
            }

            //If element is common
            if(check){

                //Assign the element permanent location or aka array which will be retuned
                arr_comm[index] = arr_cmpr1[row];
                index++;
            }

        }

        //Assigning the pointer which denotes size of new array
        *size_comm = index;

        //Outputting the result
        if(count1 == 0 || count2 == 0){
            printf("Invalid data, please try again to enter valid store ID's.\n");
        }

        //Valid case 
        else{
            for(rep = 0; rep < index; rep++){
                if(rep == 0){
                    printf("The phone types both available in stores with ID %d  and %d are: ", str_id1, str_id2); //To print header only once without distrupting if else structure
                }
                printf("%d ", arr_comm[rep]);
            }
            puts(" ");
        }
    } while(count1 == 0 || count2 == 0);
}

/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
//Function to output the total number of each phone type available in all stores which receives 2D array and row size
void find_tot_phn_type(int arr_data[MAX][COL], int row_size){
    int tot_qnt, row_cmprd, row_cmpr ;

    //Nested loop to compare phone types and determine whether they're identical
    for(row_cmprd = 0; row_cmprd < row_size; row_cmprd++){

        //Resetting the total number of quantity for each repetition
        tot_qnt = arr_data[row_cmprd][2];

        for(row_cmpr = row_cmprd + 1; row_cmpr < row_size; row_cmpr++){

            //If compared one matches with searching element then find them summation of quantity
            if(arr_data[row_cmprd][1] == arr_data[row_cmpr][1]){
                tot_qnt += arr_data[row_cmpr][2];

                //Local solution
                arr_data[row_cmpr][1] = -1;
            }
        } //End of inside loop

        //If compared element didn't read before then print the total quantity of that phone type
        if(arr_data[row_cmprd][1] > 0){
            printf("The phone type %d has %d total quantity.\n", arr_data[row_cmprd][1], tot_qnt);
        }
    }
}

/*-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
//Function to update "phonedata.txt" file with the latest data which receieves 2D array and row size
void save_latest_update(int arr_data[MAX][COL], int row_size){

    //Variable declarations
    FILE *fptr = fopen("phonedata.txt","w");
    int row, col;

    //Case of error on the assigning file pointer
    if(fptr == NULL){
        //Informing the user
        printf("It's not possible to open file:\n"
        "Please check whether the file exists or exists in the current directory.\n"
        "Also please check whether you have the privilege to read file or not.\n");

        //Exit Status for the portable code
        exit(EXIT_FAILURE);
    }

    //Printing the latest data within the text file
    for(row = 0; row < row_size; row++){
        for(col = 0; col < COL; col++){
            fprintf(fptr, "%-9d", arr_data[row][col]);
        }
        fputs("\n", fptr);
    }

    fclose(fptr);
}