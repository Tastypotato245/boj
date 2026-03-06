// https://www.acmicpc.net/problem/33689
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int N;

void Solve()
{
	cin >> N;

	int count = 0;
	string s;

	for (int i = 0; i < N; i++)
	{
		cin >> s;
		if (s[0] == 'C')
			count++;
	}

	cout << count;
}

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
