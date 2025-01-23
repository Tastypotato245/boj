// https://www.acmicpc.net/problem/5554
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	a, b, c, d;

void Solve()
{
	cin >> a >> b >> c >> d;
	int sum = a + b + c + d;
	cout << sum / 60 << "\n";
	cout << sum % 60 << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
