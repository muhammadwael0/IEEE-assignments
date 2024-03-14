#include <stdio.h>

int cube(int num);

int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%i", &num);
    printf("Cube of %d = %d\n", num, cube(num));
}

int cube(int num)
{
    return num * num * num;
}