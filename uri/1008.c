#include <stdio.h>

int main()
{
    int n, h;
    float r;

    scanf("%d %d", &n, &h);
    scanf("%f", &r);

    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %0.2f\n", h * r);

    return 0;
}