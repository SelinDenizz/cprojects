/* a program to find an apartment that has highest expense which is the summation of water, electricity and gas expenses.
 * There are 8 building in an apartment */
#include<stdio.h>
#include<math.h>
#define MAX 8

//Data struct
struct apartment{

    double water;
    double gas;
    double elec;

} aps[MAX];

//Driver function
int main(){
    //Variables to keep max expense and the sum
    double max_exp = 0, sum=0.;

    //Variables to track apartment no and the building that has max expense
    int ap_no = 1, max_b;
    
    //Getting informations from user
    for(int rep = 0; rep < MAX; rep++){
        printf("Please enter water, gas and electricity bill of apartment %d by respectively:", ap_no);
        scanf("%lf %lf %lf", &aps[rep].water, &aps[rep].gas, &aps[rep].elec);

        //Tracking for building no
        ap_no++;
    }

    //Loop to find max expense by scanning the array
    for(int rep = 0; rep < MAX; rep++){
        sum = aps[rep].water + aps[rep].gas + aps[rep].elec;

        //Tracking the maximum expense
        if(sum > max_exp){
            max_exp = sum;

            //Tracking for building no
            max_b = rep + 1;
        }

        //Resetting sum for other apartment
        sum = 0;
    }

    //Outputting the result
    printf("The building %d has the biggest expense between %d building with the cost of %lf", max_b, MAX , max_exp);

    //Return Status 
    return (0);
}