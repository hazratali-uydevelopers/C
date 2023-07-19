#include <stdio.h>

int main()
{
    double Pi = 3.14159;
    
    double R;
    scanf("%lf", &R);

    double A = Pi*(R*R);
    printf("A=%0.4lf\n", A);

    return 0;
}