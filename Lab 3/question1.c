#include <stdio.h>
#include <math.h>

double thr(double mhr, double rhr, char inten) { //main function to determine RHR

    float inten_factor;

    switch (inten)
    {
        case 'L':
            inten_factor = 0.55;
            break;
        case 'M':
            inten_factor = 0.65;
            break;
        case 'H':
            inten_factor = 0.8;
            break;
    }

    double equation = (mhr - rhr) * inten_factor + rhr;

    return (equation);
}

double mhr(char sex, int age) { //seperate sub-function for huge equation

    double equation, exponent;

    switch (sex)
    {
    case 'M':
        equation = 203.7 / (1 + exp(0.033 * (age - 104.3)));
        break;
    case 'F':
        equation = 190.2 / (1 + exp(0.0453 * (age - 107.5)));
        break;
    }

    return (equation);
}

int main(void) {

    char sex;
    char inten;
    int age;
    double rhr;

    printf("Sex (M/F): "); //asking the user for values
    scanf(" %c", &sex);

    printf("Training Intensity (L/M/H): ");
    scanf(" %c", &inten);

    printf("Age: ");
    scanf("%d", &age);

    printf("Resting Heart Rate (RHR): ");
    scanf("%lf", &rhr);

    double mhr_calc = mhr(sex, age); //stores the function with required params in a function
    double thr_calc = thr(mhr_calc, rhr, inten); //uses line above to calculate rhr

    printf("Calculated Training Heart Rate: %lf", thr_calc); //print statement for rhr

    return 0;
}
