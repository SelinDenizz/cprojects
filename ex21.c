/* A program that creates 2 array which each includes 5 elements.
 * Then use a function that receives two arrays, checks whether the array are anagram and returns 1 if they're anagrams. */
#include<stdio.h>

//Function Prototypes
int find_anagram(int arr1[], int arr2[]);

int main(){
    //Variable declarations
    int counter = 0, arr1[5], arr2[5], rep1 , rep2;
    
    //Creating array one
    printf("Please enter the elements of array 1:");
    for(rep1 = 0; rep1 < 5; rep1++){
        scanf(" %d", &arr1[rep1]);
    }

    //Creating array two
    printf("Please enter the elements of array 2:");
    for(rep2 = 0; rep2 < 5; rep2++){
        scanf(" %d", &arr2[rep2]);
    }

    //Function call and output the result
    if(find_anagram(arr1, arr2)){
        printf("These two arrays are anagram.\n");
    }
    else{
        printf("These two arrays are not anagrams.\n");
    }

    //Exit Status
    return(0);
}

// A Function to decide whether these two arrays are anagrams or not
int find_anagram(int arr1[], int arr2[]){
    //Variable declarations
    int counter = 0, ch_first, ch_sec;

    //Checking the values of elements by comparing with the elements in first array 
    for(ch_first = 0; ch_first < 5; ch_first++){
        //Check each element of second array
        for(ch_sec = 0; ch_sec < 5; ch_sec++){
            //If any element is same with the element in array 1 upgrade counter by one
            if(arr1[ch_first] == arr2[ch_sec]){
                counter++;
                arr2[ch_sec]=-1; //Local solution 
            }
        }
    }

    //Exit Status
    if(counter == 5){
        return 1;
    }
    else{
        return 0;
    }
}

