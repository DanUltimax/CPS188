#include <stdio.h>

int main() {
    
    FILE *datafile; //points to the datafile in the directory
    
    datafile = fopen("data.txt", "r"); 
    
    int en, shifts; //en = employee number
    float hours_per_shift, wage, hours_tot, gross_pay;
    
    printf("EMPLOYEE #|\tTOTAL HRS|\tGROSS PAY|\n");

    while (!(feof(datafile))) {
        
        hours_tot = 0;
        
        fscanf(datafile, "%d%d%f", &en, &shifts, &wage); //stores each column as a certain variable, replaced for each row
        
        printf("\t%d", en);
        
        for (int i=1; i <= shifts; i++) {
            fscanf(datafile, "%f", &hours_per_shift);
            hours_tot += hours_per_shift;
        }
        
        printf("\t%10f", hours_tot);
        
        if (hours_tot <= 15) {
            
            gross_pay = hours_tot * wage; //gross pay is calulated using base wage
            
        } else if (hours_tot > 15 && hours_tot <= 25) {
            
            gross_pay = hours_tot * (wage + (wage*0.05)); //gross pay is calculated with a base wage increase of 5%
            
        } else if (hours_tot > 25) {
            
            gross_pay = hours_tot * (wage + (wage*0.10)); //same idea, but 10%
            
        }
        
        printf("\t$%.2f\n", gross_pay);
        
        if (feof(datafile))
            break; //checks if the file reads null, and closes the loop
    }
    
}