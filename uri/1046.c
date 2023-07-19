#include <stdio.h>

int main()
{
    int start, end, playtime;

    scanf("%d %d", &start, &end);

    if (start > end)
    {
        playtime = 24 - start + end;
    }
    else if (start == end)
    {
        playtime = 24;
    }
    else
    {
        playtime = end - start;
    }

    printf("O JOGO DUROU %d HORA(S)\n", playtime);

    return 0;
}