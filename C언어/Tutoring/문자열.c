#include<stdio.h>
int print(char ch[]);
int chan(char ch[]);

int main()
{
	char a[10];
	scanf("%s", a);
	print(a);
	chan(a);
	return 0;
}

int print(char ch[])
{
	int i;
	int count = 0;
	for (i = 0; ch[i] != NULL; i++)
	{
		if (ch[i] == 'a')
			count = count + 1;
	}
	printf("%d", count);
	
	return 0;

}

int chan(char ch[])
{
	int i;
	for (i = 0; ch[i] !=NULL; i++)
	{
		if (ch[i] == 'a')
			ch[i] = 'b';
	}

	printf("%s", ch);

	return 0;
	
}