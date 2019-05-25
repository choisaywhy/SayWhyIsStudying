#include <stdio.h>

int main() {

	int num = 0;

	printf("성적을 입력하시오 : ");

	scanf_s("%d", &num);

	if (num >= 60)
	{
		
		if (num == 100)
			printf("만점입니다.");

		else printf("합격입니다.");
	
	
	}


	else
		printf("불합격입니다.");


	return 0;


}