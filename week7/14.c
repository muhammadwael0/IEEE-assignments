#include <stdio.h>

#define READ_BIT(reg, n) ((reg >> (n - 1)) & 1)
#define SIZE sizeof (int) * 8

int main()
{
    unsigned char Bin[SIZE] = {0};
    int i, num;
    printf("Enter Number: ");
    scanf("%d", &num);

    for(i = 0; i < SIZE; i++){
        Bin[i] = READ_BIT(num, i + 1);
    }
    printf("Num in Binary: ");
    for (i = SIZE - 1; i >= 0; i--) {
        printf("%hu", Bin[i]);
    }
}