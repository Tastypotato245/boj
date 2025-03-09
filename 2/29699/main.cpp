// https://www.acmicpc.net/problem/29699
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
string s = "WelcomeToSMUPC";

void Solve()
{
	cin >> N;
	cout << s[(N - 1) % 14];
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
