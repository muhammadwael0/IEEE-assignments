#include <stdio.h>

typedef unsigned char uint8;

uint8 getMSB(long long num, uint8 size);

int main()
{
    short num;
    printf("Enter Num: ");
    scanf("%hd", &num);
    printf("MSB = %d", getMSB(num, sizeof (num)));
}

uint8 getMSB(long long num, uint8 size)
{
    return (num & (1 << (size * 8 - 1)) ? 1 : 0);
}