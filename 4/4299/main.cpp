// https://www.acmicpc.net/problem/4299
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	sum, sub;

void Solve()
{
	cin >> sum >> sub;
	int tmp = sum + sub;
	if (tmp % 2 == 1 || sum < sub)
		cout << -1;
	else
		cout << tmp / 2 << " " << sum - tmp / 2;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
