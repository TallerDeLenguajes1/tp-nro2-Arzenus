#include <stdlib.h>
#include <stdio.h>

#define N 4
#define M 5

int main()
{	
	int mt[N][M];
	
	for (int i = 0; i < 20; ++i)
	{
		printf(" %p \r\n", mt+i);
	}

	return 0;

}