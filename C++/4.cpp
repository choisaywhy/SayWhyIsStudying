/*
������ȸ lv3

���Խ� 
? : ���� ���ڰ� �ְ� ������ �� �ִ�
* : ���� ���ڰ� 0�� �̻� �ݺ��� �� �ִ�

���ڿ��� ����� �� �� ���� n���� ���ڿ��� �����ϳ�

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