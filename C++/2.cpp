/*
2019 알고리즘경진대회 lv3

소중이는 얼마 전 강의시간이 지루해서 블랙 스퀘어라는 게임을 하나 다운로드 받았습니다. 블랙스
퀘어라는 게임은 화면이 네 개의 조각으로 나뉘어져 있고, 매 초마다 검은색 사각형이 4개의 조각
중 하나에서 나옵니다. 이때 검은색 사각형이 나오는 조각을 터치하면 되는데, 각 조각에는 소모하
는 칼로리가 있습니다. 소중이가 게임을 마쳤을 때 소모하는 칼로리를 계산하세요.
입력
첫 번째 줄에는 각 조각에서 소모하는 칼로리 a1, a2, a3, a4(0 ≤ a1, a2, a3, a4 ≤ 104)
두 번째 줄에는 검은색 사각형이 나오는 조각을 뜻하는 숫자들의 문자열 s (1 ≤ |s| ≤ 105), 예를 들
어 문자열 “121431”이 입력되었을 때, 1번, 2번, 1번, 4번, 3번, 1번 조각의 순서로 검은색 사각형이
나옴
출력
소중이가 소모하는 칼로리


*/


#include <iostream>
#include <string>

using namespace std;

int main() {


	int cal[4];
	int ans[4] = {0,};
	int count;
	int answer=0;

	for(int i=0;i<4;i++)
		cin >> cal[i];

	cin >> count;

	//for (size_t i = 0; i < length; i++)
	//{

	//}


	for (int i = 0; count != 0; i++)
	{
		ans[count % 10-1]++;

		count /= 10;
	}



	for (int i = 0; i < 4; i++)
	{
		answer += cal[i] * ans[i];
	}

	cout << answer;

	return 0;

}