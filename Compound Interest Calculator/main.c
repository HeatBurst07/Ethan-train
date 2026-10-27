#include <stdio.h>
#include <math.h>

int main(){

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("---Compound Interest Calculator---\n");

    printf("Enter the principal : ");
    scanf("%lf", &principal);

    printf("Please Enter the Interest Rate % : ");
    scanf("%lf", &rate);
    rate = rate/100;

    printf("Please Enter the number of years : ");
    scanf("%d", &years);

    printf("Enter amount of times compounder per year : ");
    scanf("%d", &timesCompounded);

    //interest formula : A = P(1 + intRate/timeCompPerYear)nt-sqrd time(years)
    total = principal * pow(1 + rate/timesCompounded, timesCompounded * years);

    printf("After %d years, you will have : $%.2lf", years, total);

    return 0;
}