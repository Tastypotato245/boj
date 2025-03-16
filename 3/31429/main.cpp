// https://www.acmicpc.net/problem/31429
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;
	if (N == 1) cout << "12 1600";
	else if (N == 2) cout << "11 894";
	else if (N == 3) cout << "11 1327";
	else if (N == 4) cout << "10 1311";
	else if (N == 5) cout << "9 1004";
	else if (N == 6) cout << "9 1178";
	else if (N == 7) cout << "9 1357";
	else if (N == 8) cout << "8 837";
	else if (N == 9) cout << "7 1055";
	else if (N == 10) cout << "6 556";
	else if (N == 11) cout << "6 773";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
