// https://www.acmicpc.net/problem/31609
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	bool used[10] = {false};

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int x;
		cin >> x;
		used[x] = true;
	}

	for (int i = 0; i <= 9; i++)
	{
		if (used[i])
			cout << i << '\n';
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return (0);
}
