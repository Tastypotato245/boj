// https://www.acmicpc.net/problem/17010
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
	int t, n;
	char c;

	cin >> t;

	while(t--)
	{
		cin >> n >> c;
		while(n--)
			cout << c;
		cout << '\n';
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
