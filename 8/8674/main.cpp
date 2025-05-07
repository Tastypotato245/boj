// https://www.acmicpc.net/problem/8674
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

long long A, B;

void Solve()
{
	cin >> A >> B;
	if (A % 2 == 1 && B % 2 == 1)
		cout << min(A, B);
	else
		cout << 0;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
