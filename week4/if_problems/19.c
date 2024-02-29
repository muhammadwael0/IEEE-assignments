#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("Enter marks of subjects Physics, Chemistry, Biology, Mathematics and Computer\n");
    scanf("%i %i %i %i %i", &a, &b, &c, &d, &e);
    float percentage = (a + b + c + d + e) / 5.0;
    if (percentage >= 90)
        printf("Grade A\n");
    else if (percentage >= 80)
        printf("Grade B\n");
    else if (percentage >= 70)
        printf("Grade C\n");
    else if (percentage >= 60)
        printf("Grade D\n");
    else if (percentage >= 40)
        printf("Grade E\n");
    else if (percentage < 40)
        printf("Grade F\n");
}