// https://www.acmicpc.net/problem/26711
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int	N;
string a, b, ans;
int carry;

void Solve()
{
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	while (a.size() < b.size())
		a += "0";
	while (b.size() < a.size())
		b += "0";

	N = a.size();
	for (int i = 0; i < N; ++i)
	{
		int cur = a[i] - '0' + b[i] - '0' + carry;
		if (cur > 9)
			carry = 1;
		else
			carry = 0;
		ans += cur % 10 + '0';
	}

	if (carry)
		ans += '1';
	reverse(ans.begin(), ans.end());
	cout << ans;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
