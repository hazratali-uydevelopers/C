#include <stdio.h>

int main()
{
    int time, speed;
    float print;

    scanf("%d %d", &time, &speed);

    print = (time * speed) / 12.00;
    printf("%0.3f\n", print);

    return 0;
}