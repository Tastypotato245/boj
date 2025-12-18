// https://www.acmicpc.net/problem/30031
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	cin >> N;

	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		int w, h;
		cin >> w >> h;

		if (w == 136) sum += 1000;
		else if (w == 142) sum += 5000;
		else if (w == 148) sum += 10000;
		else if (w == 154) sum += 50000;
	}

	cout << sum;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return 0;
}
