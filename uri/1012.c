#include <stdio.h>

int main()
{
    float a, b, c, print;

    scanf("%f %f %f", &a, &b, &c);

    print = (a * c) / 2;
    printf("TRIANGULO: %0.3f\n", print);

    print = 3.14159 * (c * c);
    printf("CIRCULO: %0.3f\n", print);

    print = (c * (a + b)) / 2;
    printf("TRAPEZIO: %0.3f\n", print);

    print = b * b;
    printf("QUADRADO: %0.3f\n", print);

    print = a * b;
    printf("RETANGULO: %0.3f\n", print);

    return 0;
}