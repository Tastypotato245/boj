// https://www.acmicpc.net/problem/1629
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

long long	A, B, C;

long long Recur(long long a, long long b)
{
	if (b == 0)
		return (1);
	if (b == 1)
		return (a);
	if (b % 2 == 0)
		return (Recur(a * a % C, b / 2) % C);
	else
		return (a * Recur(a * a % C, b / 2) % C);
}

void Solve()
{
	cin >> A >> B >> C;
	cout << Recur(A, B) % C << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
