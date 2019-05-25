#include <stdio.h>

int main() {

	double sec = 0;
	double min = 0;
	double hour = 0;
	double day = 0;
	double month = 0;
	double year = 0;


	printf("시간(초)를 입력하세요 : ");

	scanf("%lf", &sec);

	min = sec / 60;
	hour = min / 60;
	day = hour / 24;
	month = day / 30;
	year = month / 12;

	printf("%lf초는 %lf분, %lf시간, %lf일, %lf달, %lf년이다.", sec, min, hour, day, month, year);

	return 0;

}