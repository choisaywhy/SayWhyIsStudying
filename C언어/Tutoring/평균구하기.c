#include <stdio.h>

int main() {

	int n;
	int a[100];
	int i;
	float sum = 0;

	scanf("%d", &n); // ��� ���ϰ��� ���� �Է�

	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < n; i++)
		sum = sum + a[i];

	printf("%f", sum/n);
	return 0;


}