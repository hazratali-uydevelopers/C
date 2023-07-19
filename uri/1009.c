#include <stdio.h>

int main()
{
    char name[20];
    float fixed_salary, total_sell;

    scanf("%s", name);
    scanf("%f %f", &fixed_salary, &total_sell);

    printf("TOTAL = R$ %0.2f\n", fixed_salary + total_sell * 0.15);

    return 0;
}