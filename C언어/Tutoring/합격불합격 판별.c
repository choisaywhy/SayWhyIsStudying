#include <stdio.h>

int main() {

	int num = 0;

	printf("������ �Է��Ͻÿ� : ");

	scanf_s("%d", &num);

	if (num >= 60)
	{
		
		if (num == 100)
			printf("�����Դϴ�.");

		else printf("�հ��Դϴ�.");
	
	
	}


	else
		printf("���հ��Դϴ�.");


	return 0;


}