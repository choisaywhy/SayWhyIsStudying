#include <stdio.h>

int main()
{
	int a[2][5];
	int i, j;


	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			scanf("%d", &a[i][j]);

		}

	}


	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			printf("%d ", a[i][j]);

		}
		printf("\n");

	}
	



}