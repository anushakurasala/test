#include<stdio.h>
#include<stdlib.h>
#include "game.h"
#include <time.h>
int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char c1, char c2)
{
    if (c1 == c2)
    {
        return -1;
    }
    else if (c1 == 'r' && c2 == 's')
    {
        return 1;
    }
    else if (c2 == 'r' && c1 == 's')
    {
        return 0;
    }
    else if (c1 == 'p' && c2 == 'r')
    {
        return 1;
    }
    else if (c2 == 'p' && c1 == 'r')
    {
        return 0;
    }

    else if (c1 == 's' && c2 == 'p')
    {
        return 1;
    }
    else if (c2 == 's' && c1 == 'p')
    {
        return 0;
    }
}
void help()
{
    system("cls");
    printf("\n\n\n\tThis game is very easy to play.It consists of 3 levels.");
    printf("\n\n\tIf the user and computer selects rock and paper then who selects the paper will win");
    printf("\n\n\tIf the user and computer selects paper and scissor then who selects the scissor will win.");
}
void quit()
{
printf("exit");
}

