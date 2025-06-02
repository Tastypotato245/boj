// https://www.acmicpc.net/problem/14470
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	A, B, C, D, E, timer;

void Solve()
{
	cin >> A >> B >> C >> D >> E;


	for (int i = A ; i < B ; ++i)
	{
		if (i < 0)
			timer += C;
		else if (i == 0)
			timer += D + E;
		else if (i > 0)
			timer += E;
	}
	cout << timer;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
