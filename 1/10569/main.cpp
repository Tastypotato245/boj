// https://www.acmicpc.net/problem/10569
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	T, V, E;

void Solve()
{
	cin >> T;
	for (int i = 0 ; i < T ; ++i)
	{
		cin >> V >> E;
		cout << 2 - V + E << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
