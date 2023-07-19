#include <stdio.h>

int main()
{
    float a, b, c, d, e, media;

    scanf("%f %f %f %f", &a, &b, &c, &d);

    media = (a * 2 + b * 3 + c * 4 + d) / 10;

    printf("Media: %.1f\n", media);

    if (media >= 7)
    {
        printf("Aluno aprovado.\n");
    }
    else if (media < 5)
    {
        printf("Aluno reprovado.\n");
    }
    else if (media >= 5 && media <= 6.9)
    {
        printf("Aluno em exame.\n");

        scanf("%f", &e);
        printf("Nota do exame: %.1f\n", e);

        media = (media + e) / 2;

        if (media >= 5)
        {
            printf("Aluno aprovado.\n");
        }
        else if (media < 5)
        {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", media);
    }

    return 0;
}