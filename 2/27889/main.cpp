// https://www.acmicpc.net/problem/27889
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

string s;

void Solve()
{
	cin >> s;

	if (s == "NLCS")
		cout << "North London Collegiate School";
	else if (s == "BHA")
		cout << "Branksome Hall Asia";
	else if (s == "KIS")
		cout << "Korea International School";
	else if (s == "SJA")
		cout << "St. Johnsbury Academy";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
