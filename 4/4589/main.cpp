// https://www.acmicpc.net/problem/4589
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;

	cout << "Gnomes:\n";
	for (int i = 0 ; i < N ; ++i)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if ((a < b && b < c) || (a > b && b > c))
			cout << "Ordered\n";
		else
			cout << "Unordered\n";
	}

}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
