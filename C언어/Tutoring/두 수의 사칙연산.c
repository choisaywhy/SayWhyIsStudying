#include <stdio.h>

int main()
{
	int x = 0;
	int y = 0;


	printf("ù ��° ���� : ");
	scanf("%d", &x);
	
	printf("�� ��° ���� : ");
	scanf("%d", &y);

	printf("�� ���� �� : %d \n�� ���� �� : %d \n�� ���� �� : %d \n�� ���� �������� �� : %d, ������ : %d\n", x + y, x - y, x * y, x / y, x % y);

	return 0;

}