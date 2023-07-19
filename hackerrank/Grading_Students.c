#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int gread[n];

    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &gread[i]);
    }

    for (size_t i = 0; i < n; i++)
    {
        if (gread[i] < 38)
        {
            printf("%d\n", gread[i]);
        }
        else if (gread[i] % 5 > 2)
        {
            printf("%d\n", gread[i] + (5 - gread[i] % 5));
        }
        else
        {
            printf("%d\n", gread[i]);
        }
    }

    return 0;
}