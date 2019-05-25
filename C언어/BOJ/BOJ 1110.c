#include<stdio.h>
int main()
{
	int n;
	int result;
	int count = 0;

	scanf("%d", &n);
	result = n;
	do
	{	result = (result % 10) * 10 + (result / 10 + result % 10) % 10;
		count++;
	} while (n != result);
	
	
	printf("%d", count);

	return 0;
}