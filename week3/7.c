#include <stdio.h>

int main()
{
    double len_centi;
    printf("Enter length in centimeter: ");
    scanf("%lf", &len_centi);
    printf("length in meter: %.4lf m\n", len_centi / 100);
    printf("length in kilometer: %.4lf km\n", len_centi / 100000);
}