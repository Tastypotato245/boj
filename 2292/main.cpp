// https://www.acmicpc.net/problem/2292

#include <iostream>
#include <algorithm>

using namespace std;

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	int add = 6;
	int cnt = 1;

	cin >> N;
	while (N > 1)
	{
		N -= add;
		add += 6;
		++cnt;
	}
	cout << cnt << "\n";
	return (0);
}
