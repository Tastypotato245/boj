// https://www.acmicpc.net/problem/18398
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	T, N, A, B;

void Solve()
{
	cin >> T;
	for (int t = 0 ; t < T ; ++t)
	{
		cin >> N;
		for (int n = 0 ; n < N ; ++n)
		{
			cin >> A >> B;
			cout << A + B << " " << A * B << "\n";
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
