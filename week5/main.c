#include <stdio.h>

#define size 8
#define size2 100

struct product {
    int code;
    char *name;
    double price;
};

void view_cart(struct product *carts, int n);
void view_products(struct product *carts, int n);
double checkout(struct product *carts, int n);

int main()
{
    struct product products[size];
    products[0].code = 123;
    products[0].name = "PCB";
    products[0].price = 2.23;
    products[1].code = 110;
    products[1].name = "BLDC Motor";
    products[1].price = 7.76;
    products[2].code = 100;
    products[2].name = "Li Battery";
    products[2].price = 1.2;
    products[3].code = 223;
    products[3].name = "Coreless Motor";
    products[3].price = 0.89;
    products[4].code = 153;
    products[4].name = "Dc Motor";
    products[4].price = 0.7;
    products[5].code = 523;
    products[5].name = "T-block";
    products[5].price = 0.04;
    products[6].code = 193;
    products[6].name = "Transformer";
    products[6].price = 1.34;
    products[6].code = 393;
    products[6].name = "Relay";
    products[6].price = 1.87;
    products[7].code = 653;
    products[7].name = "Switch";
    products[7].price = 0.05;
    struct product cart[size2];
    int count = 0;
    while(1)
    {
        int ch, i, ch2;
        double res;
        printf("Choose From menu\n");
        printf("1- Show Cart\n");
        printf("2- make order\n");
        printf("3- Checkout\n");
        printf("4- Exit\n\n");
        printf("Enter Num: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                if (count == 0)
                    printf("Your Cart is Empty\n");
                else
                {
                    view_cart(cart, count);
                }
                break;
            case 2:
                loop:
                    view_products(products, size);
                    int code;
                    printf("Enter Code: ");
                    scanf("%d", &code);
                    for (i = 0; i < size; i++)
                    {
                        if (code == products[i].code)
                        {
                            cart[count] = products[i];
                            count++;
                            printf("Enter 1 to add another product: ");
                            scanf("%d", &ch);
                            if (ch == 1)
                                goto loop;
                            else
                                break;
                        }
                    }
                printf("Not Founded\n");
                break;
            case 3:
                res = checkout(cart, count);
                if (res == -1)
                {
                    printf("You must have 2 products at least\n");
                    break;
                }
                else
                {
                    printf("if you want Overnight delivery press 1: ");
                    scanf(" %d", &ch2);
                    if (ch2 == 1)
                        res += 5;
                    printf("you bought products cost %.2lf", res);
                    return 0;
                }
            case 4:
                return 0;
            default:
                printf("Wrong Choose\n");
        }
    }

}

void view_cart(struct product *carts, int n)
{
    int i;
    printf("Cart Info\n");
    for (i = 0; i < n; ++i)
    {
        printf("[%i] %s --> price: %.2lf\n", carts[i].code, carts[i].name, carts[i].price);
    }
}

void view_products(struct product *carts, int n)
{
    int i;
    printf("Products\n");
    for (i = 0; i < n; ++i)
    {
        printf("[%i] %s --> price: %.2lf\n", carts[i].code, carts[i].name, carts[i].price);
    }
}

double checkout(struct product *carts, int n)
{
    int i;
    if (n < 2)
        return -1;
    double sum = 0;
    for (i = 0; i < n; ++i)
    {
        sum += carts->price;
    }
    if (sum < 10)
        sum += 2;
    else
        sum += 3;
    if (n > 5)
        sum *= 0.8;
    return sum;
}