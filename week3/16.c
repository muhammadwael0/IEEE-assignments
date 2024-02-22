#include <stdio.h>

int main()
{
    double s1, s2, s3, s4, s5;
    double tot, avg, per;
    printf("Enter marks of five subjects\n");
    scanf("%lf %lf %lf %lf %lf", &s1, &s2, &s3, &s4, &s5);
    tot = s1 + s2 + s3 + s4 + s5;
    avg = tot / 5.0;
    per = tot / 5.0;
    printf("Total = %.2lf\n", tot);
    printf("Average = %.2lf\n", avg);
    printf("Percentage = %.2lf\n", per);
}