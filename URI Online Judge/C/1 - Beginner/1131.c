#include <stdio.h>
int main()
{
    int inter, inter_win = 0, gremio, gremio_win = 0, draw = 0, check = 1, cont = 0;
    while (check == 1)
    {
        cont++;
        scanf("%d %d", &inter, &gremio);
        if (inter > gremio)
            inter_win++;
        else if (gremio > inter)
            gremio_win++;
        else if (inter == gremio)
            draw++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &check);
    }
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", cont, inter_win, gremio_win, draw);
    if (inter_win > gremio_win)
        printf("Inter venceu mais\n");
    else if (gremio_win > inter_win)
        printf("Gremio venceu mais\n");
    else if (inter_win == gremio_win)
        printf("Nao houve vencedor\n");
    return 0;
}