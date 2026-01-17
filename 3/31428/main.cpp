// https://www.acmicpc.net/problem/31428
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	cin >> N;

	int cnt = 0;
	char x;
	char myTrack;

	for (int i = 0; i < N; i++)
		cin >> x;

	cin >> myTrack;

	cin.clear();
	cin.seekg(0);

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> x;
		if (x == myTrack)
			cnt++;
	}

	cout << cnt << '\n';
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return (0);
}
