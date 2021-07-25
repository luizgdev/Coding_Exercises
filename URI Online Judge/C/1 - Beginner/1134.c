#include <stdio.h>
int main()
{
    int alcohol = 0, gasoline = 0, diesel = 0, input;
    do
    {
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            alcohol++;
            break;
        case 2:
            gasoline++;
            break;
        case 3:
            diesel++;
            break;
        case 4:
            printf("MUITO OBRIGADO\n");
            printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n", alcohol, gasoline, diesel);
            break;
        default:
            break;
        }
    } while (input != 4);
    return 0;
}