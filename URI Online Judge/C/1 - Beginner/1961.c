#include <stdio.h>
#include <stdlib.h>

const char *gameResult(short unsigned int number_pipes, short unsigned int jump_height, short unsigned int *pipes);

int main()
{
    short unsigned int jump_height, number_pipes, i;

    scanf("%hu %hu", &jump_height, &number_pipes);

    short unsigned int pipes[number_pipes];

    for (i = 0; i < number_pipes; i++)
    {
        scanf("%hu", &pipes[i]);
    }

    printf("%s", gameResult(number_pipes, jump_height, pipes));

    return 0;
}

const char *gameResult(short unsigned int number_pipes, short unsigned int jump_height, short unsigned int *pipes)
{
    short unsigned int i;

    for (i = 0; i < number_pipes - 1; i++)
    {
        if (abs(pipes[i] - pipes[i + 1]) > jump_height)
        {
            return "GAME OVER\n";
        }
    }
    return "YOU WIN\n";
}