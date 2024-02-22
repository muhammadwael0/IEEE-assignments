//Write a C program to convert days into years, weeks and days.
#include <stdio.h>

int main()
{
    int days, years, weeks;
    printf("Enter Number of Days: ");
    scanf("%d", &days);
    years = days / 365.25;
    days %= 365;
    weeks = days / 7;
    days %= 7;
    printf("%d years, %d weeks, %d days", years, weeks, days);
}