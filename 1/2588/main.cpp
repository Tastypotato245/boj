// https://www.acmicpc.net/problem/2588
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	A, B;

void Solve()
{
	cin >> A >> B;
	cout << A * (B % 10) << "\n";
	cout << A * (B % 100 / 10) << "\n";
	cout << A * (B / 100) << "\n";
	cout << A * B << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
