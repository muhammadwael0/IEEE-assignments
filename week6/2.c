#include <stdio.h>
#define PI 3.14

typedef struct circle_info
{
    double diameter;
    double circumference;
    double area;
} circle;

circle find_circle(double r);

int main()
{
    double r;
    printf("Enter radius: ");
    scanf("%lf", &r);
    circle c = find_circle(r);
    printf("Diameter = %.2lf\n", c.diameter);
    printf("Circumference = %.2lf\n", c.circumference);
    printf("Area = %.2lf\n", c.area);
}

circle find_circle(double r)
{
    circle c = {r*2, PI * 2 * r, PI * r * r};
    return c;
}