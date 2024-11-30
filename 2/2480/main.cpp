// https://www.acmicpc.net/problem/2480
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	A, B, C;

void Solve()
{
	cin >> A >> B >> C;

	if (A == B && B == C)
	{
		cout << 10000 + A * 1000 << "\n";
		return ;
	}
	if (A == B)
	{
		cout << 1000 + A * 100 << "\n";
		return ;
	}
	if (A == C)
	{
		cout << 1000 + A * 100 << "\n";
		return ;
	}
	if (B == C)
	{
		cout << 1000 + B * 100 << "\n";
		return ;
	}
	cout << max(max(A, B), C)*100 << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
