#include <stdio.h>

int main(float r, float area)
{
	printf("원의 반지름 : ");
	scanf("%f", &r);

	area = r * r * 3.14;

	printf("원의 면적 : %f\n", area);

		return 0;

}