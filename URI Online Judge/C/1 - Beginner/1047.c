#include <stdio.h>
int main()
{
    int hora_inicial, minuto_inicial, hora_final, minuto_final, hora, minuto;
    scanf("%d %d %d %d", &hora_inicial, &minuto_inicial, &hora_final, &minuto_final);
    if (hora_final > hora_inicial && minuto_final > minuto_inicial)
    {
        hora = (hora_final - hora_inicial);
        minuto = (minuto_final - minuto_inicial);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);
    }
    else if (hora_final == hora_inicial && minuto_final == minuto_inicial)
    {
        hora = 24;
        minuto = 0;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);
    }
    else if (hora_final > hora_inicial && minuto_final < minuto_inicial)
    {
        hora = (hora_final - hora_inicial) - 1;
        minuto = 60 - (minuto_inicial - minuto_final);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);
    }
    else if (hora_final <= hora_inicial && minuto_final < minuto_inicial)
    {
        hora = 23 + (hora_final - hora_inicial);
        minuto = 60 - (minuto_inicial - minuto_final);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);
    }
    else if (hora_final < hora_inicial && minuto_final > minuto_inicial)
    {
        hora = 24 - (hora_inicial - hora_final);
        minuto = (minuto_final - minuto_inicial);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);
    }
    else if (hora_final < hora_inicial && minuto_final == minuto_inicial)
    {
        hora = 24 - (hora_inicial - hora_final);
        minuto = (minuto_final - minuto_inicial);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);
    }
    else if (hora_final == hora_inicial && minuto_final > minuto_inicial)
    {
        hora = (hora_final - hora_inicial);
        minuto = (minuto_final - minuto_inicial);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);
    }
    else if (hora_final > hora_inicial && minuto_final == minuto_inicial)
    {
        hora = (hora_final - hora_inicial);
        minuto = (minuto_final - minuto_inicial);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);
    }
    return 0;
}