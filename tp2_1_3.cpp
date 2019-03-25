#include <stdio.h>
#include <stdlib.h>
#include<time.h>



int main()
{
    srand(time(NULL));
    int columnas = 5 + rand()%(15+1-5);

    int matriz[15][columnas];

    for (int i = 0; i< 15; i++)
    {
        for(int j = 0; j< columnas; j++)
        {
            matriz[i][j] = 100 + rand()%(999+1-100);
        }
    }

    int mult = 15*columnas;

    for (int i = 0; i< 15; i++)
    {
        for(int j = 0; j< columnas; j++)
        {
            printf("%d", matriz[i][j]);
        }
    }

        for (int i = 0; i< 15; i++)
    {
        for(int j = 0; j< columnas; j++)
        {
            printf("%d", matriz[i][j]);
        }
    }


return 0;}
