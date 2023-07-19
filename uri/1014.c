#include <stdio.h>

int main()
{
    int x;
    float y, print;

    scanf("%d %f", &x, &y);

    print = x / y;
    printf("%0.3f km/l\n", print);

    return 0;
}