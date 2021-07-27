#include <stdio.h>
int main()
{
    int tyre_pressure[2];
    scanf("%d %d", &tyre_pressure[0], &tyre_pressure[1]);
    printf("%d\n", (tyre_pressure[0] - tyre_pressure[1]));
    return 0;
}