#include <stdio.h>

int main()
{
    int a, b, s;

    scanf("%d %d %d", &a, &b, &s);

    int print = a;

    if (a < b || a < s)
    {
        if (b > s)
        {
            print = b;
        }
        else
        {
            print = s;
        }
    }

    printf("%d eh o maior\n", print);

    return 0;
}