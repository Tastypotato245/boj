// https://www.acmicpc.net/problem/11282
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;
	string s;
	N += 3071;
	s.push_back(N / 4096 + 234);
	s.push_back(N / 64 % 64 + 128);
	s.push_back(N % 64 + 128);

	cout << s;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
