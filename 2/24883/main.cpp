// https://www.acmicpc.net/problem/24883
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

string	s;

void Solve()
{
	cin >> s;
	cout << ((s == "N" || s == "n") ? "Naver D2" : "Naver Whale");
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
