#include<stdio.h>
int main() {

	int n;
	int i;
	

	for (i = 1; i <= 9; i++)
	{
		for (n = 1; n <= 9; n++)
			printf("%d * %d = %d\n",i, n, n*i);

		printf("\n");
	}
	

	return 0;



}