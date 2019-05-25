#include <stdio.h>

int add(int x, int y, char z)
{
	if (z == '+') { printf("%d", x + y); }
	else if (z == '-') { printf("%d", x - y); }
	else if (z == '*') { printf("d", x * y); }
	else if (z == '/') { printf("%d...%d", x / y, x % y); }
	
	return 0;

}


int main(int num1, int num2, char op)
{
	scanf("%d %c %d", &num1, &op, &num2);
	
	add(num1, num2, op);

	return 0;
}