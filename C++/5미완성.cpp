/*
경진대회 lv3

정규식
? : 앞의 문자가 있거 나없을 수 있다
* : 앞의 문자가 0개 이상 반복될 수 있다

문자열의 경우의 수 중 길이 n개인 문자열이 존재하냐

*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <array>
#include <typeinfo>  

using namespace std;

int main() {


	int size;
	string num;


	cin >> size;
	cin >> num;

	int eachsize = size / 3;


	int count0 = 0;
	int count1 = 0;
	int count2 = 0;


	int** arr = new int*[3];
	for (int i = 0; i < 3; ++i)
		arr[i] = new int[size];



	for (int i = 0; i < size; i++)
	{
		if (num[i] == '0')
			arr[0][count0++] = i;
		else if (num[i] == '1')
			arr[1][count1++] = i;
		else if (num[i] == '2')
			arr[2][count2++] = i;
	}


	while (!((count0 == eachsize) && (count1 == eachsize) && (count2 == eachsize)))
	{
		int bignum;
		int smnum;

		if (count2 > eachsize)
			bignum = 2;
		else if (count2 < eachsize)
			smnum = 2;

		if (count1 > eachsize)
			bignum = 1;
		else if (count1 < eachsize)
			smnum = 1;

		if (count0 > eachsize)
			bignum = 0;
		else if (count0 < eachsize)
			smnum = 0;

		if ((bignum == 2) && (smnum == 0))
			for (int j = 0; count2 > eachsize; j++)
			{
				num[arr[bignum][j]] = '0';
				arr[smnum][count0++] = arr[bignum][j];
				arr[bignum][j] = NULL;
				count2--;

			}

		else if ((bignum == 0) && (smnum == 2))
			for (int j = 0; count0 > eachsize; j++)
			{
				num[arr[bignum][count0 - 1 - j]] = '2';
				arr[smnum][count2++] = arr[bignum][count0 - 1 - j];
				arr[bignum][count0 - 1 - j] = NULL;
				count0--;

			}
		else if ((bignum == 0) && (smnum == 1))
			for (int j = 0; count0 > eachsize; j++)
			{
				num[arr[bignum][count0 - 1 - j]] = '1';
				arr[smnum][count1++] = arr[bignum][count0 - 1 - j];
				arr[bignum][count0 - 1 - j] = NULL;
				count0--;

			}
		else if ((bignum == 1) && (smnum == 0))
			for (int j = 0; count1 > eachsize; j++)
			{
				num[arr[bignum][j]] = '0';
				arr[smnum][count0++] = arr[bignum][j];
				arr[bignum][j] = NULL;
				count1--;

			}
		else if ((bignum == 1) && (smnum == 2))
			for (int j = 0; count1 > eachsize; j++)
			{
				num[arr[bignum][count1 - 1 - j]] = '2';
				arr[smnum][count2++] = arr[bignum][count1 - 1 - j];
				arr[bignum][count1 - 1 - j] = NULL;
				count1--;

			}
		else if ((bignum == 2) && (smnum == 1))
			for (int j = 0; count2 > eachsize; j++)
			{
				num[arr[bignum][j]] = '1';
				arr[smnum][count1++] = arr[bignum][j];
				arr[bignum][j] = NULL;
				count2--;

			}


		bignum = 0;
		smnum = 0;
	}

	cout << num;



	for (int i = 0; i < 3; ++i)
		delete[] arr[i];

	delete[] arr;


	return 0;

}