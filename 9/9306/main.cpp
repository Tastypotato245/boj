// https://www.acmicpc.net/problem/9306
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
		string a, b;
		cin >> a >> b;
		cout << "Case " << i << ": " << b << ", " << a << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
