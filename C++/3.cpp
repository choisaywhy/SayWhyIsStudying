/*
������ȸ lv3

���ڰ� ���� �ʴ� �ִ� ������ ����

*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	
	int count = 0;
	int ans = 0;
	int size;


	cin >> size;

	int *arr = new int[size];

	for (int i = 0; i < size; i++)
		cin >> arr[i];


	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] <= arr[i + 1])
			count++;
		else
			count = 0;
		if (count > ans)
			ans = count;
	}


	cout << ans+1;

	delete[] arr;
	return 0;

}