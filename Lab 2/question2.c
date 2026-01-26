#include <stdio.h>
#include <math.h> //math header file for the sqrt() function

double spsound(double T) {

    double speed;

    speed = 331.3 * sqrt(1 + T/273.15); //states the formula as a function of the speed of sound

    return (speed);
}

double mstokmh(double v) {

    double speed_conv;

    speed_conv = v * 3.6; //converts m/s to km/h by multiplying by 1000/3600

    return(speed_conv);

}

int main(void) {

    printf("Welcome to the Speed of Sound Calculator!! \n - Daniel Hewer\n");

    double temp, c, c_conv;

    printf("Input a value of temperature (degrees C). -> ");
    scanf("%lf", &temp); //scans the inputted value and stores it in the memory address for the variable

    c = spsound(temp);
    c_conv = mstokmh(c); //takes the speed of sound computed in the previous line and converts it to km/h

    printf("The speed of sound in your temperature: %.3lf m/s (%.3lf in km/h)", c, c_conv); //limits values to 3 decimal places
}