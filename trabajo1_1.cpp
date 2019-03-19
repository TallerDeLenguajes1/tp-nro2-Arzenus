#include "stdio.h"
#include "stdlib.h"


int main()
{
	int Buff[5] = {5, 15, 30, 10, 35};
	int *p;
	p = Buff;

	for (int i = 0; i < 5; ++i)
	{
		printf("Los elementos del arreglo son %d\n", Buff[i]);
	}
	
	for (int i = 0; i < 5; ++i)
	{
		printf("Los elementos del arreglo, con aritmetica de puntero, son %d\n", *(p+i));

	}

	for (int i = 0; i < 5; ++i)
	{
		printf("Los elementos del arreglo, usando aritmetica de punteros en el arreglo son, son %d\n", *(Buff+i));

	}


	for (int i = 0; i < 5; ++i)
	{
		printf("Las direcciones de memoria, con aritmetica de puntero son %p\n", (p+i));

	}

	printf("El arreglo tiene un tamaño de %d y el puntero tiene un tamaño de %d\n", sizeof(Buff), sizeof(p));

	return 0;
}