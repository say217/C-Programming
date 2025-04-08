//No income tax is to be paid if income is less than 5000. If income is between 5000 and 6000 then 
//tax is 10% of the amount by which the income exceeds 5000. If income is between 6000 and 
//15000 then the tax is 100 + 20% of the amount by which the income exceeds 6000. If income is 
//more than 15000 then the tax is 1900 + 30% of the amount by which the income exceeds 15000. 
//e.g. if income is 10000 then the tax will be 100 + (10000-6000)*20/100 = 900. Write a program, 
//which reads income and calculates the income tax.  

#include <stdio.h>

// Program to calculate income tax based on given conditions
int main() {
    float income, tax = 0;
    
    // Read income from the user
    printf("Enter your income: ");
    scanf("%f", &income);
    
    // Calculate tax based on income brackets
    if (income < 5000) {
        tax = 0;
    } else if (income >= 5000 && income <= 6000) {
        tax = (income - 5000) * 0.10;
    } else if (income > 6000 && income <= 15000) {
        tax = 100 + (income - 6000) * 0.20;
    } else {
        tax = 1900 + (income - 15000) * 0.30;
    }
    
    // Print the calculated tax
    printf("Income Tax: %.2f\n", tax);
    
    return 0;
}
