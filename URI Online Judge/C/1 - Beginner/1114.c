#include <stdio.h>
#define PASSWORD 2002
int main()
{
    int password;
    do
    {
        scanf("%d", &password);
        (password == PASSWORD ? printf("Acesso Permitido\n") : printf("Senha Invalida\n"));
    } while (password != PASSWORD);
    return 0;
}