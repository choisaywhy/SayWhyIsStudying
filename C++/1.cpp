/*
�˰��� ����

���ڸ� �޾�, ���ڴ� ������ ������ ����� ��µǰ��϶�

*/



#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	string english;

	getline(cin, english);

	string answer(english);

	reverse(answer.begin(), answer.end());

	bool ensure = false;

	int i;
	int j;

	for (i = 0; i < answer.length(); i++) {


		for (j = 0; answer[i + j] >= '0' && answer[i + j] <= '9'; j++)
		{
			ensure = true;
		}

		if (ensure)
		{
			string sub = answer.substr(i, i + j);
			reverse(sub.begin(), sub.end());
			answer.replace(i, i + j, sub);
			i += j - 1;
		}

		ensure = false;




	}


	cout << answer;




	return 0;
}