// https://www.acmicpc.net/problem/9251
// github/Tastypotato245
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int val[1001];
string a, b;

void Solve()
{
	cin >> a >> b;
	for (int y = 0 ; y < a.size() ; ++y)
	{
		int pos = 0;
		for (int x = 0 ; x < b.size() ; ++x)
			if (pos < val[x])
				pos = val[x];
			else if (a[y] == b[x])
				val[x] = pos + 1;
	}
	cout << *max_element(val, val + b.size()) << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
