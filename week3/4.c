#include <stdio.h>

int main()
{
    int length, breadth;
    printf("Enter length of rectangle: ");
    scanf("%d", &length);
    printf("Enter breadth of rectangle: ");
    scanf("%d", &breadth);
    printf("perimeter of rectangle = %d", 2 * (length + breadth));
}