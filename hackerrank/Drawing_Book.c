#include <stdio.h>

int main()
{
    int n, p;

    scanf("%d %d", &n, &p);

    if (p == 1 || p == n)
    {
        printf("0\n");
    }
    else if (n / 2 > p)
    {
        printf("%d\n", p / 2);
    }
    else if (n / 2 < p)
    {
        printf("%d\n", (n / 2) - (p / 2));
    }
    else   // n / 2 == p
    {
        printf("%d\n", (n / 2) - 2);
    }

    return 0;
}