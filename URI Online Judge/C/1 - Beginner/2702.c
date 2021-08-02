#include <stdio.h>
int main()
{
    int available_chicken, available_beef, available_pasta;
    int requested_chicken, requested_beef, requested_pasta;
    int total = 0;
    scanf("%d %d %d", &available_chicken, &available_beef, &available_pasta);
    scanf("%d %d %d", &requested_chicken, &requested_beef, &requested_pasta);
    if (available_chicken < requested_chicken)
        total += (requested_chicken - available_chicken);
    if (available_beef < requested_beef)
        total += (requested_beef - available_beef);
    if (available_pasta < requested_pasta)
        total += (requested_pasta - available_pasta);
    printf("%d\n", total);
    return 0;
}