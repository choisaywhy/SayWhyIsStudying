/*
경진대회 lv3

정규식 
? : 앞의 문자가 있거 나없을 수 있다
* : 앞의 문자가 0개 이상 반복될 수 있다

문자열의 경우의 수 중 길이 n개인 문자열이 존재하냐

*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {


	string arr;

	cin >> arr;

	int countq = 0;
	int counts = 0;


	for (int i = 0; i < arr.length(); i++)
	{
		if (arr[i] == '?') // -1 1
			countq++;
		if (arr[i] == '*') // 0 ~
			counts++;
	}

	int arr_size = arr.length() - countq - counts;


	int n;
	cin >> n;

	if (n >= arr_size)
	{
		if (counts > 0)
			cout << "Possible";
		else
			cout << "Impossible";
	}
	else
		if ((arr_size - n) > countq)
			cout << "Impossible";
		else
			cout << "Possible";

	return 0;

}