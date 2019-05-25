#include <stdio.h>
int main() {
	int i, j, k;
	char S[101];

	printf("문자열을 입력하시오 : ");
	scanf(" %s", S);

	for (j = 97; j < 124; j++) {
		i = 1;
		for (k = 0; S[k] != NULL; k++) 
		{
			if (j == S[k])
			{
				i = 0;
				printf("%d ", k);
				break;
			}
		}
		if (i)
			printf("-1 ");
	}
	return 0;
}

//
//int main()
//{
//	int i, j, k,l;
//	char S[101];
//	int M[26];
//
//	for (i = 0; i < 26; i++)
//		M[i] = -1;
//	
//	printf("문자열을 입력하시오 : ");
//	scanf("%s", S);
//
//	for (j = 97; j < 124; j++)
//	{
//		for (k = 0; S[k] != NULL; k++)
//		{
//			if (j == S[k])
//			{
//				M[j - 'a'] = k;
//				break;
//			}
//		}
//	}
//
//	for (l = 0; l < 26; l++)
//			printf("%d ", M[l]);
//
//	return 0;
//}