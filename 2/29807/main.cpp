// https://www.acmicpc.net/problem/29807
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;
long long score[5] = {0, 0, 0, 0, 0};

void Solve()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> score[i];
	}

	long long result = 0;

	// 국어 vs 영어
	if (score[0] > score[2])
		result += (score[0] - score[2]) * 508;
	else
		result += (score[2] - score[0]) * 108;

	// 수학 vs 탐구
	if (score[1] > score[3])
		result += (score[1] - score[3]) * 212;
	else
		result += (score[3] - score[1]) * 305;

	// 제2외국어
	if (N == 5)
		result += score[4] * 707;

	// 우편번호 곱하기
	result *= 4763;

	cout << result;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return 0;
}
