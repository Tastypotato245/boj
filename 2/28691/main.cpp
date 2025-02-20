// https://www.acmicpc.net/problem/28691
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

char c;

void Solve()
{
	cin >> c;
	if (c == 'M') cout << "MatKor";
	else if (c == 'W') cout << "WiCys";
	else if (c == 'C') cout << "CyKor";
	else if (c == 'A') cout << "AlKor";
	else if (c == '$') cout << "$clear";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
