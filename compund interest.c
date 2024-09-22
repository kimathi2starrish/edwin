/*calculatiion of compound interest
Name:Kendi Edwin 
REG NO:CT101/G/22309/24
*/
#include <stdio.h>
#include <math.h>  // for using the pow() function

int main(){
    double principal, rate, time,
compound_interest;
    int n;  // number of times interest is compounded per year

    //input the values
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate(in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the time in years:");
    scanf("%lf", &time);

    printf("Enter the number of times the interest is compounded per year: ");
    scanf("%d", &n);

    // Convert rate from percentage to decimal
    rate = rate / 100;

    //compound interest formula 
    compound_interest = principal * ( (1 + rate / n), n * time);

    //output the result 
    printf("The compound interest after %.2lfyears is: %.2lf\n", time, compound_interest);


    return 0;    

}