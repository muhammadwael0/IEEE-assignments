#include <stdio.h>

int main()
{
    double basic, gross, da, hra;
    printf("Enter basic salary: ");
    scanf("%lf", &basic);
    if(basic <= 10000)
    {
        da  = basic * 0.8;
        hra = basic * 0.2;
    }
    else if(basic <= 20000)
    {
        da  = basic * 0.9;
        hra = basic * 0.25;
    }
    else
    {
        da  = basic * 0.95;
        hra = basic * 0.3;
    }
    gross = basic + hra + da;
    printf("New Salary = %.2lf\n", gross);
    return 0;
}