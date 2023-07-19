#include <stdio.h>

int main()
{
    double radius, valume;

    scanf("%lf", &radius);

    valume = (4.0 / 3) * 3.14159 * (radius * radius * radius);
    printf("VOLUME = %0.3f\n", valume);

    return 0;
}