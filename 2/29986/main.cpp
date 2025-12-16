// https://www.acmicpc.net/problem/29986
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	int H;
	cin >> N >> H;

	int cnt = 0;
	for (int i = 0; i < N; i++)
	{
		int A;
		cin >> A;
		if (A <= H)
			cnt++;
	}

	cout << cnt;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return 0;
}
