#include <stdio.h>

int main()
{
    float x, y, z;

    scanf("%f %f %f", &x, &y, &z);

    if (x + y > z && x < y + z && x + z > y)
    {
        printf("Perimetro = %.1f\n", x + y + z);
    }
    else
    {
        printf("Area = %.1f\n", (((x + y)) / 2) * z);
    }

    return 0;
}