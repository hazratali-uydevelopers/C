#include <stdio.h>

int main()
{
    float A, B, C, result;
    scanf("%f %f %f", &A, &B, &C);

    result = (A * 2 + B * 3 + C * 5) / 10;
    printf("MEDIA = %0.1f\n", result);

    return 0;
}