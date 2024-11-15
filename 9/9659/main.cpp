// https://www.acmicpc.net/problem/9659
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

long long N;

void Solve()
{
	cin >> N;
	cout << (N % 2 == 1 ? "SK" : "CY" ) << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
