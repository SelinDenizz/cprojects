/* Define a POINT structure which has two float member variables (x and y coordinates)
 * Ask the user to enter coordinates for two points.
 * Pass these two points to a function, which should calculate the middle of the line between these two points and returns the middle point via a parameter
 * Display the result on screen in main function */
#include<stdio.h>
#include<stdlib.h>

//Data struct
struct POINT{
    float x;
    float y;
} num1, num2, mid ;

//Function prototype
void find_mid_point(struct POINT num1, struct POINT num2, struct POINT *mid);

//Driver function
int main(void){
    //Getting numbers from user
    printf(
    "Enter coordinates for first point and second point: \n");
    scanf("%f%f%f%f", &num1.x,&num1.y,&num2.x,&num2.y);

    //Function call to find middle point
    find_mid_point(num1, num2, &mid);

    //Outputting the result
    printf("Middle of line is located at: %.2f %.2f", mid.x, mid.y);

    //Exit status
    return(0);
}

//Function to find midpoint
void find_mid_point(struct POINT num1, struct POINT num2, struct POINT *mid){
    //Middle of x
    (*mid).x = (num1.x + num2.x) / 2;

    //Middle of y
    (*mid).y = (num1.y + num2.y) / 2;
}
