// https://www.acmicpc.net/problem/31520
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

string N;

void Solve()
{
	cin >> N;

	string cur = "";
	for (int k = 1; cur.size() <= N.size(); k++)
	{
		cur += to_string(k);
		if (cur == N)
		{
			cout << k;
			return;
		}
	}
	cout << -1;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return (0);
}
