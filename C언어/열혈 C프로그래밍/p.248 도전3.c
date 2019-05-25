#include<stdio.h>
int gcd(x,y);
int main()
{
	int x;
	int y;


	printf("두 개의 정수 입력 : ");
	scanf("%d %d", &x, &y);

	if (x < y)
		printf("두 수의 최대공약수 : %d\n", gcd(x, y));
	else if (x > y)
		printf("두 수의 최대공약수 : %d\n", gcd(y, x));
	else
		printf("두 수의 최대공약수 : %d\n", x);

	return 0;

}

int gcd(x, y)//x가 작은 수임
{
	int i;
	int result;

	for (i = 1; i <= x; i++)//플플이니까 어짜피 가장 큰 수가 저장됨!!
		if (x % i == 0 && y % i == 0)
			result = i;

		return result;

}