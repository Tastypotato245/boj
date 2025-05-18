// https://www.acmicpc.net/problem/11257
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;

	for (int i = 0 ; i < N ; ++i)
	{
		string no;
		cin >> no;

		int a, b, c;
		cin >> a >> b >> c;

		cout << no << " " << a + b + c << " ";
		if (a + b + c >= 55 && a >= 11 && b >= 8 && c >= 12)
			cout << "PASS\n";
		else
			cout << "FAIL\n";

	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
