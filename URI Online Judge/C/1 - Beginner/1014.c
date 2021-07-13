#include <stdio.h>
int main()
{
    int x;
    float y;
    scanf("%d %f", &x, &y);
    float consumo = (x / y);
    printf("%.3f km/l\n", consumo);
    return 0;
}