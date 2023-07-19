#include <stdio.h>

int main()
{
    float A, B, result;
    scanf("%f %f", &A, &B);

    result = (A * 3.5 + B * 7.5) / 11;
    printf("MEDIA = %0.5f\n", result);

    return 0;
}