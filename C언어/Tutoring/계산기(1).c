#include <stdio.h>

add(int x, int y, char z)
{
	if (z == '+') printf("%d", x + y);
	if (z == '-') printf("%d", x - y);
	if (z == '*') printf("%d", x * y);
	if (z == '/') printf("%d", x / y);

	return 0;
}

int main(int num1, int num2, char op)
{
	printf("두 숫자와 연산을 입력하시오 : ");

	scanf("%d %c %d", &num1, &op, &num2);
	
	add(num1, num2, op);

	return 0;

}