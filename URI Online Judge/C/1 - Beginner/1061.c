#include <stdio.h>
int main()
{
    int dia_inicial, dia_final, hora_inicial, hora_final, minuto_inicial, minuto_final, segundo_inicial, segundo_final;
    scanf("Dia %d", &dia_inicial);
    scanf("%d : %d : %d\n", &hora_inicial, &minuto_inicial, &segundo_inicial);
    scanf("Dia %d", &dia_final);
    scanf("%d : %d : %d", &hora_final, &minuto_final, &segundo_final);
    int dia = (dia_final - dia_inicial), hora = (hora_final - hora_inicial), minuto = (minuto_final - minuto_inicial), segundo = (segundo_final - segundo_inicial);
    if (segundo < 0)
    {
        segundo += 60;
        minuto--;
    }
    if (minuto < 0)
    {
        minuto += 60;
        hora--;
    }
    if (hora < 0)
    {
        hora += 24;
        dia--;
    }
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dia, hora, minuto, segundo);
    return 0;
}