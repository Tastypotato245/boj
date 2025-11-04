// https://www.acmicpc.net/problem/27590
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int S, pS, M, pM;

void Solve()
{
	cin >> S >> pS >> M >> pM;
	S = pS - S, M = pM - M;

	while (S != M) {
		if (S < M) S += pS;
		else M += pM;
	}

	cout << S;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
