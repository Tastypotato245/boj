// https://www.acmicpc.net/problem/16017
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	A, B, C, D;

void Solve()
{
	cin >> A >> B >> C >> D;

	if (A == 8 || A == 9)
		if (D == 8 || D == 9)
			if (B == C)
			{
				cout << "ignore";
				return ;
			}
	cout << "answer";

}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
