#include <stdio.h>

void print_even(int a, int b);
void print_odd(int a, int b);

int main()
{
    int a, b;
    printf("Enter Two Numbers\n");
    scanf("%d %d", &a, &b);
    int ch;
    printf("Enter 1 for Even 2 for Odd: ");
    scanf(" %d", &ch);
    switch (ch) {
        case 1:
            print_even(a, b);
            break;
        case 2:
            print_odd(a, b);
            break;
        default:
            printf("Wrong Choose\n");
            break;
    }
}

void print_even(int a, int b)
{
    if (a % 2 == 0) {
        printf("%d ", a);
    }
    if (a == b) return;
    print_even(a+1, b);
}

void print_odd(int a, int b)
{
    if (a % 2 != 0) {
        printf("%d ", a);
    }
    if (a == b) return;
    print_odd(a+1, b);
}