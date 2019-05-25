#include<stdio.h>

int main() {

	int n;
	int i;
	int j;
	int k;

	printf("삼각형의 변의 길이 : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = n - i; j >= 1; j--)
			printf(" ");

		for (k = 1; k <= i; k++)
			printf("* ");
	
		printf("\n");
	}

	
	return 0;
}