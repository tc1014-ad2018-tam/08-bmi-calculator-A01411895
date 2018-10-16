//Luis Ignacio Acosta Zamora A01411895

/*
 * Let the user decide what units system to use:
    The user can enter the data using metric units(meters and kilograms)or...
    ... the user can enter the data using imperial units(feet, inches and pounds)
Convert the units to the metric system to compute the BMI.
Tell the user its BMI category (look for this data on the internet)

 */


#include <stdio.h>

double Calculate_BMI(double kilogram, double meter){
    double result;
    result= kilogram/(meter*meter);
    return result;
}

double BMI_Imperial_To_Metric(double pounds, double inches){
    double newKilogram;
    double newMeter;
    double result;

    newKilogram= pounds * 0.453592;
    newMeter= inches * 0.0254;

    result= newKilogram/(newMeter*newMeter);

    return result;
    ;

}

void BMI_Category(double bmi){
    if(bmi < 18.5){
        printf("You are Underweight! Go and eat some more!");
    }

    if(bmi >= 18.5 && bmi < 25){
        printf("You have normal Weight! Good job on your diet!");

    }

    if(bmi >= 25 && bmi < 30){
        printf("You have pre-Obesity! Be careful with your diet and exercise more!");
    }

    if(bmi >= 30 && bmi < 35){
        printf("You have Obesity Class I! Time to change your diet and start exercising!");
    }

    if(bmi >= 35 && bmi < 40){
        printf("You have Obesity Class II! Get professional help to form a new diet plan!");
    }

    if(bmi >= 40){
        printf("You have Obesity Class III! You really like cake, huh? Go and get some help with professionals and change yourself!");
    }
}

int main() {
    int type;
    double mass;
    double height;
    double bmiNumber;


    printf("Which system do you want to use? If Metric, type 0, if Imperial, type 1: ", type);
    scanf("%i", &type);

    if(type == 0){
        printf("Please type your weight in kilograms: ", mass);
        scanf("%lf", &mass);
        printf("Please type your height in meters:", height);
        scanf("%lf", &height);

        bmiNumber= Calculate_BMI(mass, height);

        printf("Your BMI is: %lf!\n", bmiNumber);

        BMI_Category(bmiNumber);

        return 0;

    }

    if (type == 1){
        printf("Please type your weight in pounds: ", mass);
        scanf("%lf", &mass);
        printf("Please type your height in inches:", height);
        scanf("%lf", &height);

        bmiNumber= BMI_Imperial_To_Metric(mass, height);

        printf("Your BMI is: %lf!\n", bmiNumber);

        BMI_Category(bmiNumber);

        return 0;
    }

    else{
        printf("That is not a valid system! Run the program again to restart.");
    }

    return 0;
}