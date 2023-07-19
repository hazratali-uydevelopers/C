#include <stdio.h>

int main()
{
    int n, temp;
    scanf("%d", &n);
    int bird[n];

    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &bird[i]);
    }

    int id[5] = {0};

    for (size_t i = 0; i < n; i++)
    {
        if (bird[i] == 1)
        {
            id[0]++;
        }
        else if (bird[i] == 2)
        {
            id[1]++;
        }
        else if (bird[i] == 3)
        {
            id[2]++;
        }
        else if (bird[i] == 4)
        {
            id[3]++;
        }
        else if (bird[i] == 5)
        {
            id[4]++;
        }
    }

    temp = id[0];
    int ans = 1;

    for (size_t i = 1; i < 5; i++)
    {
        if (id[i] > temp)
        {
            temp = id[i];
            ans =1 + i;
        }
    }

    printf("%d", ans);

    return 0;
}
