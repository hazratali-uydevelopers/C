#include <stdio.h>
#include <math.h>

int main()
{
    double x1, x2, y1, y2, print;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    print = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("%0.4f\n", print);

    return 0;
}

/*
#include <stdio.h>
#include <math.h>

int main()
{
    double x1, x2, y1, y2, print;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    print = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("%0.4f\n", print);

    return 0;
}*/