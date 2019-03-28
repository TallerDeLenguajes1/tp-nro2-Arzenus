#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
    srand(time(NULL));

    int *filas[15];

    int contador = 0;

    int arregloPar[15];

    for (int i = 0; i< 15; i++)
    {
    	int columnas = 5 + rand()%(15+1-5);

        int *col = (int *)malloc(sizeof(int) * columnas);
        filas[i] = col;

        for (int j = 0; j < columnas; ++j)
        {
           	filas[i][j] = 100 + rand()%(999+1-100);
           	printf(" %d ", filas[i][j]);

            if ((filas[i][j]%2) == 0)
            {
                contador = contador + 1;
            }
        }
        printf("\n");

        arregloPar[i] = contador;
    }

    printf("\n");

    for (int k = 0; k<15; k++)
    {
        printf("En la fila %d hay %d numeros pares\n", k+1, arregloPar[k]);
    }


    return 0;

    //int *punt
}
