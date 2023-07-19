#include <stdio.h>

int main()
{
    double a;
    scanf("%lf", &a);

    int n = a * 100, m;

    printf("NOTAS:\n");

    m = n / 10000;
    printf("%d nota(s) de R$ 100.00\n", m);
    n = n % 10000;

    m = n / 5000;
    printf("%d nota(s) de R$ 50.00\n", m);
    n = n % 5000;

    m = n / 2000;
    printf("%d nota(s) de R$ 20.00\n", m);
    n = n % 2000;

    m = n / 1000;
    printf("%d nota(s) de R$ 10.00\n", m);
    n = n % 1000;

    m = n / 500;
    printf("%d nota(s) de R$ 5.00\n", m);
    n = n % 500;

    m = n / 200;
    printf("%d nota(s) de R$ 2.00\n", m);
    n = n % 200;

    printf("MOEDAS:\n");

    m = n / 100;
    printf("%d moeda(s) de R$ 1.00\n", m);
    n = n % 100;

    m = n / 50;
    printf("%d moeda(s) de R$ 0.50\n", m);
    n = n % 50;

    m = n / 25;
    printf("%d moeda(s) de R$ 0.25\n", m);
    n = n % 25;

    m = n / 10;
    printf("%d moeda(s) de R$ 0.10\n", m);
    n = n % 10;

    m = n / 5;
    printf("%d moeda(s) de R$ 0.05\n", m);
    n = n % 5;

    printf("%d moeda(s) de R$ 0.01\n", n);

    return 0;
}