#include <stdio.h>

int main()
{
	int subject;
	float a[100] = { 0, };
	int M = 0;
	float sum = 0;
	int i;

	scanf("%d", &subject);

	for(i = 0; i < subject;i++)
	{
		scanf("%f", &a[i]);
	
		if (M < a[i]) M = a[i];
	}

	for (i = 0; i < subject; i++)
	{
		a[i] = (a[i] / M) * 100;
	
		sum = sum + a[i];
	}

	printf("%.2f", sum / subject);

	return 0;
}