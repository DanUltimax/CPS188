#include <stdio.h>
#include <math.h> //for exponents

float bmi_func(float mass, float height) {

    float index = mass/(pow(height, 2)); // mass/height^2

    return index;
}

int main(void) {

    float mass, height;

    printf("Mass (kg): "); //asks the user for mass
    scanf("%f", &mass);

    printf("Height (m): "); //asks the user for height
    scanf("%f", &height);

    printf("Your calculated BMI status indicates "); //first part of the sentence


    float bmi = bmi_func(mass, height);

    // CATEGORY DISTINCTION (2nd part of the sentence)

    if (bmi < 18.5) {
        printf("Underweight"); //below 18.5
    } else
    if (bmi >= 18.5 && bmi < 25) {
        printf("Normal"); //from 18.5 to 24.99999
    } else
    if (bmi >= 25 && bmi < 30) {
        printf("Overweight"); //from 25 to 29.999999999
    } else
    if (bmi >= 30) {
        printf("Obese"); //above 30
    }

    printf(" with a BMI of %.1f", bmi); //3rd part of the sentence
    return 0;
}