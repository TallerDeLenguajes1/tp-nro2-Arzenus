#include <stdlib.h>
#include <stdio.h>

#define N 4
#define M 5

void mt(int _N, int _M){

	for(int f = 0;f<_N; f++)
	{
	 	for(int c = 0;c<_M; c++)
		{
			printf(" %d ", c);
		}
	printf("\n");
	}
}


int main()
{
	int f,c;
	mt(N, M);

	return 0;
}