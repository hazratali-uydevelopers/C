#include <stdio.h>

int main()
{
    int n, h, m;

    scanf("%d", &n);

    h = n / 3600;
    n %= 3600;
    m = n / 60;
    n %= 60;

    printf("%d:%d:%d\n", h, m, n);

    return 0;
}