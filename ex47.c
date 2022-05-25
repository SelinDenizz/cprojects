/* Lab 10 question 3
 * a program to find distance between two point in the coordinate system
 * Name: Selin Deniz */
#include<stdio.h>
#include<math.h>

//Data structure 
struct POINT{
    double x;
    double y;
};

//Driver function
int main(){
    //Variable declarations
    struct POINT  num1, num2, res;
    double final;

    //Getting points from user for the first point
    printf("Enter coordinates for first point: ");
    scanf("%lf%lf", &num1.x, &num1.y);

    //Getting points from user for the second point
    printf("Enter coordinates for second point: ");
    scanf("%lf%lf", &num2.x, &num2.y);

    //Finding the distances of the x and y components
    res.x = num1.x - num2.x;
    res.y = num1.y - num2.y;

    //Applying the distance formula
    final = sqrt(pow(res.x, 2) + pow(res.y, 2));

    //Outputting the result
    printf("Distance between two points: %lf", final);

    //Exit Status
    return 0;
}