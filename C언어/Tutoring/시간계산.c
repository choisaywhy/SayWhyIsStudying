#include <stdio.h>

int main() {

	double sec = 0;
	double min = 0;
	double hour = 0;
	double day = 0;
	double month = 0;
	double year = 0;


	printf("�ð�(��)�� �Է��ϼ��� : ");

	scanf("%lf", &sec);

	min = sec / 60;
	hour = min / 60;
	day = hour / 24;
	month = day / 30;
	year = month / 12;

	printf("%lf�ʴ� %lf��, %lf�ð�, %lf��, %lf��, %lf���̴�.", sec, min, hour, day, month, year);

	return 0;

}