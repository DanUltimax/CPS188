#include <stdio.h>
#include <math.h>

double thr(double mhr, double rhr, char inten) {

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

    double equation = (mhr - rhr) * inten + rhr;

    return (equation);
}

double mhr(char sex, int age) {

    double equation, exponent;

    switch (sex)
    {
    case 'M':
        exponent = 0.033*(age - 104.3);
        equation = 203.7/(1 + exp(exponent));
        break;
    case 'F':
        equation = 190.2/(1+exp(0.0453*(age - 107.5)));
        break;
    }
}

int main(void) {

    char sex;
    char inten;
    int age;
    double rhr;

    printf("Sex (M/F): ");
    scanf(" %c", &sex);

    printf("Training Intensity (L/M/H): ");
    scanf(" %c", &inten);

    printf("Age: ");
    scanf("%d", &age);

    printf("Resting Heart Rate (RHR): ");
    scanf("%lf", &rhr);

    double mhr_calc = mhr(sex, age);
    double thr_calc = thr(mhr_calc, rhr, inten);

    printf("Calculated Training Heart Rate: %lf", thr_calc);

    return 0;
}
