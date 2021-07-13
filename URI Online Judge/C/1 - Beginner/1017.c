#include <stdio.h>
int main()
{
    int tempo, velocidade;
    scanf("%d %d", &tempo, &velocidade);
    float gasolina = (float)(tempo * velocidade) / 12.0;
    printf("%.3f\n", gasolina);
    return 0;
}