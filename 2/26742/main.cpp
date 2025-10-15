// https://www.acmicpc.net/problem/26742
// github/Tastypotato245/boj

#include <bits/stdc++.h>

using namespace std;

int	N;

void Solve()
{
	string input; cin >> input;

	int whiteSocks = 0, blackSocks = 0;

	for (char c : input) {
		if (c == 'B') whiteSocks++;
		else blackSocks++;
	}

	int pairs = whiteSocks / 2 + blackSocks / 2;
	cout << pairs << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
