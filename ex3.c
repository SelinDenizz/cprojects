/*A program to assist with the calculation of intravenous rates in a hospital*/
#include<stdio.h>
//Function prototypes
void get_problem(void);
float fig_drops_min(int a, int b);
float fig_ml_hr(int a);
float get_kg_rate_conc(void);
float by_weight(float a, int b, float c);
float get_units_conc(void);
float by_units(float a, float b);

//Main Function
int main(){
    //Variable declarations
    int choice, rate_ml_over_hour, drop_factor, num_of_hours;
    float res_1, res_2, res_3, res_4;

    //Loop
    do
    {
        get_problem();
        printf("Problem => ");
        scanf("%d", &choice);

        //Conditional Structure for stat 1
        if(choice == 1){
            printf("Enter rate in ml/hr=>");
            scanf("%d", &rate_ml_over_hour);
            printf("Enter tubing's drop factor(drops/ml)=>");
            scanf("%d", &drop_factor);
            res_1 = fig_drops_min(rate_ml_over_hour, drop_factor);
            printf("The drop rate per minute is %.f\n", res_1);
        }
        //Conditional Structure for stat 2
        if(choice == 2){
            printf("Enter number of hours=>");
            scanf("%d", &num_of_hours);
            res_2 = fig_ml_hr(num_of_hours);
            printf("The rate in milliliters per hour is %.f\n", res_2);
        }
        //Conditional Structure for stat 3
        if(choice == 3){
            res_3 = get_kg_rate_conc();
            printf("The rate in millilitres per hour is %.f\n", res_3);
        }  
        //Conditional Structure for stat 4
        if(choice == 4){
            res_4 = get_units_conc();
            printf("The rate in millilitres per hour is %.f\n", res_4);
        }
    } while (choice != 5);
    
    //Exit Status
    return(0);
}

//Function for print the menu
void get_problem(void){
    printf("INTRAVENOUS RATE ASSISTANT\n");
    printf("Enter the number of problem that you want to solve.\n");
    printf("    GIVEN A MEDICAL ORDER IN                  CALCULATE RATE IN\n");
    printf("(1) ml / hr & tubing drop factor              drops / min\n");
    printf("(2) 1 L for n hour                            ml / hr\n");
    printf("(3) mg / kg / hr & concentration in mg / ml   ml / hr\n");
    printf("(4) units / hr & concentration in units / ml  ml / hr\n");
    printf("(5) QUIT\n");
}

//Function to solve problem 1
float fig_drops_min(int a, int b){
    //Variable declaration
    float ret_value;

    //Arithmetic operations
    ret_value = (a * b) / 60.0;
    return ret_value;
}

//Function to solve problem 2
float fig_ml_hr(int a){
    //Variable declaration
    float ret_value;

    //Arithmetic operation
    ret_value = 1000.0 / a;
    return ret_value;
}

//Functions for problem 3
float get_kg_rate_conc(void){
    //Variable declarations
    float data_rate_3, conc_3, res_3;
    int patient_weight;
    //Getting data
    printf("Enter rate in mg/kg/hr=>");
    scanf("%f", &data_rate_3);
    printf("Enter patient weight in kg=>");
    scanf("%d", &patient_weight);
    printf("Enter concentration in mg/ml =>");
    scanf("%f", &conc_3);
    //Function call
    res_3 = by_weight(data_rate_3, patient_weight, conc_3);
    return res_3;
}
float by_weight(float a, int b, float c){
    //Variable declaration
    float ret_value;
    //Arithmetic operations
    ret_value = (a * b) * (1 / c);
    return ret_value;
}

//Functions for problem 4
float get_units_conc(void){
    //Variable declarations
    float rate_4, conc_4, res_4;

    //Getting data
    printf("Enter rate in units/hr=>");
    scanf("%f", &rate_4);
    printf("Enter concentration in units/ml=>");
    scanf("%f", &conc_4);

    //Function call
    res_4 = by_units(rate_4, conc_4);
    return res_4;
}
float by_units(float a, float b){
    //Variable declarations
    float ret_value;

    //Arithmetic operations
    ret_value = a * (1 / b);
    return ret_value;
}


