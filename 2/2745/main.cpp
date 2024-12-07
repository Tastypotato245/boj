// https://www.acmicpc.net/problem/2745
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

string s;
int B;

void Solve()
{
	cin >> s >> B;

	int ans = 0;
	for (char c : s)
	{
		if (c >= '0' && c <= '9')
			ans = ans * B + (c - '0');
		else
			ans = ans * B + (c - 'A' + 10);
	}
	cout << ans;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
