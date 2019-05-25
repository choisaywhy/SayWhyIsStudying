#include <stdio.h>

int main()
{
	int x = 0;
	int y = 0;


	printf("첫 번째 정수 : ");
	scanf("%d", &x);
	
	printf("두 번째 정수 : ");
	scanf("%d", &y);

	printf("두 수의 합 : %d \n두 수의 차 : %d \n두 수의 곱 : %d \n두 수의 나눗셈의 몫 : %d, 나머지 : %d\n", x + y, x - y, x * y, x / y, x % y);

	return 0;

}