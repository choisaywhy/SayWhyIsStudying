#include <stdio.h>

int main(int x, int y, int z)
{
	

	printf("�� ���� �Է��ϼ��� : ");
	scanf_s("%d %d", &x, &y);

	(x < y) ? (z = x) : (z = y);

	printf("�Է¹��� �� ���� %d, %d�̰�, �� �� �� ���� ���� %d �Դϴ�.", x, y, z);


	return 0;

}