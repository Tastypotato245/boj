// https://www.acmicpc.net/problem/10768
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	MM, dd;

void Solve()
{
	cin >> MM >> dd;
	
	if (MM > 2 || (MM == 2 && dd > 18))
		cout << "After";
	else if (MM < 2 || (MM == 2 && dd < 18))
		cout << "Before";
	else if (MM == 2 && dd == 18)
		cout << "Special";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
