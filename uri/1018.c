#include <stdio.h>

int main()
{
    int n, print;

    scanf("%d", &n);

    printf("%d\n", n);

    print = n / 100;
    printf("%d nota(s) de R$ 100,00\n", print);
    n %= 100;

    print = n / 50;
    printf("%d nota(s) de R$ 50,00\n", print);
    n %= 50;

    print = n / 20;
    printf("%d nota(s) de R$ 20,00\n", print);
    n %= 20;

    print = n / 10;
    printf("%d nota(s) de R$ 10,00\n", print);
    n %= 10;

    print = n / 5;
    printf("%d nota(s) de R$ 5,00\n", print);
    n %= 5;

    print = n / 2;
    printf("%d nota(s) de R$ 2,00\n", print);
    n %= 2;

    print = n;
    printf("%d nota(s) de R$ 1,00\n", print);

    return 0;
}