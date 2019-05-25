#include<stdio.h>
int gugu(x, y);
int main()
{
	int n;
	int m;

	scanf("%d %d", &n, &m);

	if (m >= n)
		gugu(n, m);


	else//n>=m
		gugu(m, n);

	return 0;
}

int gugu(x, y)
{
	int i;
	int j;
	for (i = x; i <= y; i++)
	{
		printf("\n<%d´Ü>\n",i);
		for (j = 1; j <= 9; j++)
			printf("%d * %d = %d\n", i, j, i*j);
	}

	return 0;
}