#include <stdio.h>
int main()
{
    float n1, n2, n3, n4;
    int i;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    float media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
    if (media >= 5 && media < 7)
    {
        printf("Media: %.1f\n", media);
        printf("Aluno em exame.\n");
        float exame;
        scanf("%f", &exame);
        printf("Nota do exame: %.1f\n", exame);
        float media_final = (media + exame) / 2;
        if (media_final < 5)
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", media_final);
        }
        else
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", media_final);
        }
    }
    else if (media < 5)
    {
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
    }
    else if (media >= 7)
    {
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
    }
    return 0;
}
