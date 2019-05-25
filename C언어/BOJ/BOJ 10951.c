#include <stdio.h>
int main()
{
	int a;
	int b;
	

	for (; scanf("%d %d", &a, &b) != EOF;)
	{
		
		printf("%d\n", a + b);
	}

		
	
	return 0;
}

//int main()
//{
//	int a[100];
//	int b[100];//배열은 이름이 주소값
//	int i = 0;
//
//	while (scanf("%d %d", &a[i], &b[i]) != EOF){
//		printf("%d\n", a[i] + b[i]);
//		i++;
//	}
//	return 0;
//
//}


// 