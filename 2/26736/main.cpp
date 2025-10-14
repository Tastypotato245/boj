// https://www.acmicpc.net/problem/26736
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	string str; cin >> str;

	int cntA = count(str.begin(), str.end(), 'A'),
		cntB = count(str.begin(), str.end(), 'B');

	cout << cntA << " : " << cntB << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
