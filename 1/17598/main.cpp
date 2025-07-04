// https://www.acmicpc.net/problem/17598
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

string s;
int isLion;

void Solve()
{
	for (int i = 0 ; i < 9 ; ++i)
	{
		cin >> s;
		if (s == "Lion")
			++isLion;
		else
			--isLion;
	}
	cout << ((isLion > 0) ? "Lion" : "Tiger");
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
