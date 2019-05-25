#include <stdio.h>

int main(int x)
{
	printf("월급을 입력하세요 : ");
	
	scanf_s("%d", &x);

	printf("당신의 연봉은 %d이며, 10년간 저축할수 있는 금액은 %d입니다.", 12 * x, 120 * x);

	return 0;


}