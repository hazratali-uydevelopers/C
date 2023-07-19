#include <stdio.h>

int main()
{
    int x, y, z, a, b, c, temp;

    scanf("%d %d %d", &x, &y, &z);

    a = x;
    b = y;
    c = z;

    while (1)
    {
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }

        if (b > c)
        {
            temp = b;
            b = c;
            c = temp;
        }
        
        if (a < b && b < c)
        {
            break;
        }
    }

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("\n");
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    return 0;
}