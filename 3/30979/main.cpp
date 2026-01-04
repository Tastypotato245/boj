// https://www.acmicpc.net/problem/30979
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	int T;
	cin >> T;
	cin >> N;

	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		int F;
		cin >> F;
		sum += F;
	}

	if (sum >= T)
		cout << "Padaeng_i Happy\n";
	else
		cout << "Padaeng_i Cry\n";
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return 0;
}
