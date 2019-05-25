#include<stdio.h>
int main()
{
	//1
	int a,b,t,i;
	scanf("%d", &t);

	for (i = 1; i <= t; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}

	//2
	int T;
	int i;
	int A[100];
	int B[100];

	scanf("%d", &T);

	for (i = 1; i <= T; i++)
	{
		scanf("%d %d", &A[i], &B[i]);

	}

	for (i = 1; i <= T; i++)
	{
		printf("%d\n", A[i] + B[i]);

	}


	return 0;
}