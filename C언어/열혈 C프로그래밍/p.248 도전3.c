#include<stdio.h>
int gcd(x,y);
int main()
{
	int x;
	int y;


	printf("�� ���� ���� �Է� : ");
	scanf("%d %d", &x, &y);

	if (x < y)
		printf("�� ���� �ִ����� : %d\n", gcd(x, y));
	else if (x > y)
		printf("�� ���� �ִ����� : %d\n", gcd(y, x));
	else
		printf("�� ���� �ִ����� : %d\n", x);

	return 0;

}

int gcd(x, y)//x�� ���� ����
{
	int i;
	int result;

	for (i = 1; i <= x; i++)//�����̴ϱ� ��¥�� ���� ū ���� �����!!
		if (x % i == 0 && y % i == 0)
			result = i;

		return result;

}