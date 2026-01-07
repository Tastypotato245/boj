// https://www.acmicpc.net/problem/31048
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	int T;
	cin >> T;

	// N!의 마지막 자리 (0! ~ 10!)
	int lastDigit[11] = {1, 1, 2, 6, 4, 0, 0, 0, 0, 0, 0};

	while (T--)
	{
		cin >> N;
		cout << lastDigit[N] << '\n';
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return 0;
}
