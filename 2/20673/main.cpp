// https://www.acmicpc.net/problem/20673
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	P, Q;

void Solve()
{
	cin >> P >> Q;

	if (P <= 50 && Q <= 10)
		cout << "White";
	else if (Q > 30)
		cout << "Red";
	else
		cout << "Yellow";

}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
