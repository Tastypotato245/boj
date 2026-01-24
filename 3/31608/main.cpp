// https://www.acmicpc.net/problem/31608
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	string S, T;
	cin >> N;
	cin >> S >> T;

	int cnt = 0;
	for (int i = 0; i < N; i++)
	{
		if (S[i] != T[i])
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
	return (0);
}
