#include <stdio.h>

int main(int x, int y, int z)
{
	

	printf("두 수를 입력하세요 : ");
	scanf_s("%d %d", &x, &y);

	(x < y) ? (z = x) : (z = y);

	printf("입력받은 두 수는 %d, %d이고, 두 수 중 작은 수는 %d 입니다.", x, y, z);


	return 0;

}