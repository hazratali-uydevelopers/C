#include <stdio.h>

int main()
{
    int n, k, b, sum = 0; // n = array size, k = did not eat, b == charged bill

    scanf("%d %d", &n, &k);

    int bill[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &bill[i]);
    }

    bill[k] = 0;

    for (int i = 0; i < n; i++)
    {
        sum += bill[i];
    }

    scanf("%d", &b);

    if (sum / 2 == b)
    {
        printf("Bon Appetit\n");
    }
    else
    {
        printf("%d", b - sum / 2);
    }

    return 0;
}