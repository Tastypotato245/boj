// https://www.acmicpc.net/problem/27294
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	T, S;

bool isLunch()
{
	return (T >= 12 && T <= 16);
}

void Solve()
{
	cin >> T >> S;

	if (S == 1 || !isLunch())
		cout << "280";
	else if (isLunch() && !S)
		cout << "320";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
