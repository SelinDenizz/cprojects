/* Lab 9 Question 1
 * A program that removes repeated characters from a string
 * Name: Selin Deniz */
#include<stdio.h>
#include <string.h>
#define MAX 100
 
int main() {   
    //Variable declarations
    char str[MAX], temp=1, comp_el = '*';  
    int  rep_to_search, ind_id_el, index_inc = 0, n;
    
    //Getting targeted string from user
    printf("Enter a string: ");
    gets(str); 

    //To determine whether elements are repeated or not
    for(rep_to_search = 0; str[rep_to_search]; rep_to_search++){

        //If an element in the string is not equal to asterisk
    	if(!(str[rep_to_search] == comp_el)){

            //Then search identical elements in the rest of the string    
    		for(ind_id_el = rep_to_search + 1; str[ind_id_el]; ind_id_el++){
                
                //If other elements identical with compared element the assign them random character which is asterisk in that case
            	if(str[rep_to_search] == str[ind_id_el]){

            	   str[ind_id_el] = comp_el;
                }
        	
		    }
    		
		}
	
    }
    
    //To remove all dublicates in the string
    for(rep_to_search = 0 ; str[rep_to_search] ;rep_to_search++){

     	str[rep_to_search] = str[rep_to_search + index_inc];
        
        //If element is replaced element which is asterisk in that case control other elements
     	if(str[rep_to_search] == comp_el){
		  index_inc++;
		  rep_to_search--;
	    }
     	
    }
    
    //Outputting elements in the dublicates removed form
    printf("Modified string: %s", str);
 	 
    //Exit Status
    return 0;
}