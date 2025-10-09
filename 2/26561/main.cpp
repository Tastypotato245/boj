// https://www.acmicpc.net/problem/26561
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
	int caseCnt; cin >> caseCnt;

	for (int i = 0; i < caseCnt; i++)
	{
		int population, time; cin >> population >> time;

		int birth = time / 4, death = time / 7;

		population += (birth - death);
		cout << population << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
