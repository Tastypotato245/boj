// https://www.acmicpc.net/problem/1402
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	T;

// 모든 경우가 다 yes임
void Solve()
{
	cin >> T;

	for (int i = 0 ; i < T ; ++i)
	{
		int A, B;

		cin >> A >> B;
		cout << "yes" << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
