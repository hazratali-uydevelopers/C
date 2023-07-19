#include <stdio.h>

int main()
{
    int product, amount;
    float rate, sum = 0;

    for (int i = 0; i < 2; i++)
    {
        scanf("%d %d %f", &product, &amount, &rate);
        sum += amount * rate;
    }

    printf("VALOR A PAGAR: R$ %0.2f\n", sum);

    return 0;
}