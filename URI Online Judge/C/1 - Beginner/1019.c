#include <stdio.h>
int main()
{
    int hora = 0;
    int minutos = 0;
    int segundos;
    scanf("%d", &segundos);
    hora = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundos = (segundos - (3600 * hora) - (minutos * 60));
    printf("%d:%d:%d\n", hora, minutos, segundos);
    return 0;
}