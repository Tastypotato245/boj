// https://www.acmicpc.net/problem/29766
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int N;
string S;

void Solve()
{
	cin >> S;

	int cnt = 0;
	for (int i = 0; i + 3 < S.size(); i++)
	{
		if (S.substr(i, 4) == "DKSH")
			cnt++;
	}

	cout << cnt;
}

int	main(void)
{
	ios::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);

	Solve();
	return (0);
}
