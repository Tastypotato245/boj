// https://www.acmicpc.net/problem/3046
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	R1, S;

void Solve()
{
	cin >> R1 >> S;
	cout << 2 * S - R1; 
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
