// https://www.acmicpc.net/problem/9660
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

long long	N;

void Solve()
{
	cin >> N;
	long long c = N % 7;
	if (c == 0 || c == 2)
		cout << "CY" << "\n";
	else
		cout << "SK" << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
