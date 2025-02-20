// https://www.acmicpc.net/problem/25372
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

string s;
int N;

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> s;
		cout << (s.size() >= 6 && s.size() <= 9 ? "yes" : "no") << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
