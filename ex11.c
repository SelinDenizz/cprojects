/* A Program to find frequency of repetition of  each element in an array  */
 
#include <stdio.h>
#define MAX 30
 
int main() {
    //Variable declarations
	int arr[MAX], frequency[MAX], counter, size, i, rep, j;
	
    //Getting the size of array
	printf("Please enter number of elements in an array which should be less than 30 :   ");
	scanf("%d", &size);
	
    //Creating the array
	printf("Please enter %d elements of an array :  ", size);
	for (rep = 0; rep < size; rep++)
	{   
    	scanf("%d", &arr[rep]);

        //States that haven't started to count occurence frequency yet
    	frequency[rep] = -1;
   	}     
    
    //Counting the repeatition loop
	for (i = 0; i < size; i++)
	{
        //Setting the counter for the first element of array to one because it would be repeated at least one time
		counter = 1;

        //Comparing the first element of array with other elements
		for(j = i + 1; j < size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			counter++;
    			frequency[j] = 0;
    		}
    	}
    	if(frequency[i] != 0)
    	{
    		frequency[i] = counter;
		}
	}

 	//Output the result
 	for (i = 0; i < size; i++)
  	{
  		if(frequency[i] != 0)
  		{
  			printf("%d occurs %d times \n", arr[i], frequency[i]);
		}		
  	}

    //Exit Status	     
 	return 0;
}