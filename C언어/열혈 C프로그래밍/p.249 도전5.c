#include<stdio.h>
int main()
{
	int n;
	int i;
	int count1;
	int count2= 0;
	for (n = 1;count2 < 10; n++)
	{
		count1 = 0;
		for (i = 1; i <= n; i++)
		{
			if (n % i == 0)
				count1 = count1 + 1;
		}

		if (count1 == 2)
		{
				printf("%d\n", n);
				count2 = count2 + 1;			
		}
	}


	return 0;
	

}