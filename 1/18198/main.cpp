// https://www.acmicpc.net/problem/18198
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

string s;
int a, b;

void Solve()
{
	cin >> s;

	for(int i = 0; i < s.size(); i += 2)
	{
		if(s[i] == 'A') a += s[i + 1] - '0';
		else b += s[i + 1] - '0';
	}
	if(a > b) cout << "A";
	else cout << "B";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
