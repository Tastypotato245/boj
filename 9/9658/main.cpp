// https://www.acmicpc.net/problem/9658
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;
	int ans = N % 7;
	if (ans == 1 || ans == 3)
		cout << "CY" << "\n";
	else
		cout << "SK" << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
