#include <stdio.h>

int main()
{
    int start_h, start_m, end_h, end_m, playtime_h, playtime_m;

    scanf("%d %d %d %d", &start_h, start_m, &end_h, end_m);

    if (start_h > end_h)
    {
        playtime_h = 24 - start_h + end_h;
    }
    else if (start_h == end_h)
    {
        playtime_h = 24;
    }
    else
    {
        playtime_h = end_h - start_h;
    }

    if (start_m > end_m)
    {
        playtime_m = 60 - start_m + end_m;
    }
    else if (start_m == end_m)
    {
        playtime_m = 60;
    }
    else
    {
        playtime_m = end_m - start_m;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", playtime_h, playtime_m);

    return 0;
}