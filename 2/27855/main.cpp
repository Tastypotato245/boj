// https://www.acmicpc.net/problem/27855
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

void Solve()
{
	int h1, b1, h2, b2; cin >> h1 >> b1 >> h2 >> b2;

	int player1Score = 3 * h1 + b1,
		player2Score = 3 * h2 + b2;

	string ans = "NO SCORE";
	if (player1Score > player2Score)
		ans = "1 " + to_string((player1Score - player2Score));
	else if (player2Score > player1Score)
		ans = "2 " + to_string((player2Score - player1Score));
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
