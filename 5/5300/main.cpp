// https://www.acmicpc.net/problem/5300
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;
	for (int i = 1 ; i <= N ; ++i)
	{
		cout << i << " ";
		if (i % 6 == 0 || i == N)
			cout << "Go! ";
	}

}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
