#include <stdio.h>

int main()
{
    int s, t, a, b, m, n, apple = 0, orange = 0, temp;

    scanf("%d %d", &s, &t);
    scanf("%d %d", &a, &b);
    scanf("%d %d", &m, &n);

    for (size_t i = 0; i < m; i++)
    {
        scanf("%d", &temp);
        if (a + temp >= s && a + temp <= t)
        {
            apple++;
        }
        temp = 0;
    }

    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        if (b + temp >= s && b + temp <= t)
        {
            orange++;
        }
        temp = 0;
    }

    printf("%d\n", apple);
    printf("%d\n", orange);

    return 0;
}