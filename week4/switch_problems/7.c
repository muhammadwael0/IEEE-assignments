#include <stdio.h>
#include <math.h>
#define bool _Bool
int main()
{
    double a, b, c, rt1, rt2, imag, dist;
    printf("Enter values of a b c\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    dist = (b * b) - (4 * a * c);
    bool ch = dist > 0;
    switch(ch)
    {
    case 1:
        rt1 = (-b + sqrt(dist)) / (2 * a);
        rt2 = (-b - sqrt(dist)) / (2 * a);
        printf("roots: %.2lf  --  %.2lf", rt1, rt2);
        break;
    case 0:
        switch(dist < 0)
        {
        case 1:
            rt1 = rt2 = -b / (2 * a);
            imag = sqrt(-dist) / (2 * a);
            printf("roots: %.2lf + i%.2lf  --  %.2lf + i%.2lf", rt1, imag, rt2, imag);
            break;
        case 0:
            rt1 = rt2 = -b / (2 * a);
            printf("roots: %.2lf  --  %.2lf", rt1, rt2);
            break;
        }
    }
}