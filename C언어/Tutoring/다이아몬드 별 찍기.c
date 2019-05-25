
#include <stdio.h>
int main() {
	int n, i, j, k;

	printf("정수를 입력하시오 : "); // 정수를 입력받기 위한 안내문 출력
	scanf("%d", &n); // 정수를 입력받음

	// 삼각형 (n줄)
	for (i = 1; i <= n; i++) // n줄을 출력하는 for문 (i = 줄의 번호)
	{
		for (j = i; j < n; j++) // 띄어쓰기를 n-i(입력정수 - 줄의 번호)개 출력
			printf(" ");
		
		for (k = 1; k <= 2 * i - 1; k++) // *을 2 * i - 1(2 * 줄의 번호 - 1)개 출력
			printf("*");

		printf("\n"); // 한 줄이 끝났으므로 엔터~~
	}

	// 역삼각형 (n-1줄)
	for (i = 1; i < n; i++) // n - 1줄을 출력하는 for문 (i = 줄의 번호)
	{
		for (j = 1; j <= i; j++) // 띄어쓰기를 i(줄의 번호)개 출력
			printf(" ");
		
		for (k = 2 * n - 1; k > 2 * i; k--) // *을 [(2 * n - 1) - (2 * i)]개 죽,[(2 * 입력정수 - 1) - (2 * 줄의 번호)]개 출력
			printf("*");

		printf("\n"); // 한 줄이 끝났으므로 엔터~~
	}

	return 0;
}