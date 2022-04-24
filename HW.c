/* Homework 
 * Content: creating a student grading system  */
#include<stdio.h>
//global variables
float hw_per, mid_per, fin_per;

//function prototypes
void setPercentages();
float setHomeworkPercentage();
float setMidtermPercentage();
float setFinalPercentage();
int getTotalGrade(int a, int b, int c);
char getLetterGrade(int a);
//Additional function 
float getFloatTotalGrade(int a, int b, int c);

int main(){
    //Variable declarations
    char choice, char_grade1, char_grade2, char_grade3;
    int counter = 0, h1, m1, f1, grade_1;
    int h2, m2, f2, grade_2, h3, m3, f3, grade_3;
    float avg_1, avg_2, avg_3;
    float f_grade1, f_grade2, f_grade3, tot_g1 = 0, tot_g2 = 0, tot_g3 = 0;
    
    //Greeting and inform user
    printf("Welcome to course grading system !\n");
    printf("Please set homework, midterm, final percentages first\n");
    //Function call to get percentages
    setPercentages();
    printf("Done.\n");

    //Loop structure
    do {
        //To track number of student
        counter++;

        //For first course
        printf("(Student %d)\t", counter);
        printf("Enter homework, midterm and final grade for first course:");
        scanf("%d %d %d", &h1, &m1, &f1);
        grade_1 = getTotalGrade(h1, m1, f1);
        //To calculate exact average this function will keep floating point form of grade
        f_grade1 = getFloatTotalGrade(h1, m1, f1);
        tot_g1 += f_grade1 ;

        //For second course
        printf("(Student %d)\t", counter);
        printf("Enter homework, midterm and final grade for second course:");
        scanf("%d %d %d", &h2, &m2, &f2);
        grade_2 = getTotalGrade(h2, m2, f2);
        //To calculate exact average this function will keep floating point form of grade
        f_grade2 = getFloatTotalGrade(h2, m2, f2);
        tot_g2 += f_grade2 ;

        //For third course
        printf("(Student %d)\t", counter);
        printf("Enter homework, midterm and final grade for third course:");
        scanf("%d %d %d", &h3, &m3, &f3);
        grade_3 = getTotalGrade(h3, m3, f3);
        //To calculate exact average this function will keep floating point form of grade
        f_grade3 = getFloatTotalGrade(h3, m3, f3);
        tot_g3 += f_grade3 ;

        //Letter grades
        char_grade1 = getLetterGrade(grade_1);
        char_grade2 = getLetterGrade(grade_2);
        char_grade3 = getLetterGrade(grade_3);

        //Printing results
        printf("(Student %d)\t", counter);
        printf("Grade for first course is: %c (%d)\n", char_grade1, grade_1);
        printf("(Student %d)\t", counter);
        printf("Grade for second course is: %c (%d)\n", char_grade2, grade_2);
        printf("(Student %d)\t", counter);
        printf("Grade for third course is: %c (%d)\n", char_grade3, grade_3);

        //Choice to decide whether keep going or not
        printf("Do you want to enter another student? (y/n):");
        scanf(" %c",&choice);
    } while (choice != 'n');

    //Find averages
    avg_1 = tot_g1 / (float) counter ;
    avg_2 = tot_g2 / (float) counter ;
    avg_3 = tot_g3 / (float) counter ;

    //Print averages
    printf("First course average: %f\n", avg_1);
    printf("Second course average: %f\n", avg_2);
    printf("Third course average: %f\n", avg_3);
    printf("Bye!\n");
    
    //Exit Status
    return (0);
}

//Function to get percentages and assign it to global variables by calling three different function
void setPercentages(){
    hw_per = setHomeworkPercentage();
    mid_per = setMidtermPercentage();
    fin_per = setFinalPercentage();
}
//Three function called by setPercentage function
float setHomeworkPercentage(){
    //Variable declaration
    float return_value;
    //Getting data from user
    printf("Please enter homework percentage:");
    scanf("%f", &return_value);
    return(return_value);

}
float setMidtermPercentage(){
     //Variable declaration
    float return_value;
    //Getting data from user
    printf("Please enter midterm percentage:");
    scanf("%f", &return_value);
    return(return_value);

}
float setFinalPercentage(){
     //Variable declaration
    float return_value;
    //Getting data from user
    printf("Please enter final percentage:");
    scanf("%f", &return_value);
    return(return_value);

}
//Function to calculate course grade
int getTotalGrade(int a, int b, int c){
    return ((a * hw_per) / 100.0 + (b * mid_per) / 100.0 + (c * fin_per) / 100.0);
}
//Function to find char grade
char getLetterGrade(int a){
    if(90 <= a && a <= 100)
        return ('A');
    else if(75 <= a && a <= 89)
        return('B');
    else if(60 <= a && a <= 74)
        return('C');
    else if(45 <= a && a <=59)
        return('D');
    else
        return('F');
}
//Function to keep grade as the floating point form before casting to int type to help find the average of each course
float getFloatTotalGrade(int a, int b, int c){
    return (((a * hw_per) / 100.0) + ((b * mid_per) / 100.0) + ((c * fin_per) / 100.0));
}
