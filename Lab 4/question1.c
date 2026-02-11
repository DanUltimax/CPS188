#include <stdio.h>
#include <math.h>

int factorial(int n) {
    int x = 1, a;
    for (a = 1; a <= n; a++) {
        x *= a;
    }
    return x;
}

int main(void) {
    
    int rows = 9; //prints the first NINE (9) rows of the triangle
    
    //using the formula for nCr, we can print the digits of pascals triangle individually

    for (int n = 0; n < rows; n++) {
        
        for (int r = 0; r <= n; r++) {
            int x = factorial(n) / (factorial(r)*factorial(n-r)); //nCr formula 
            //first loop: 0!/0!*0! = 1
            
            printf(" %d", x);
        }
        
        printf("\n");
    }
    return 0;
}