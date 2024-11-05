// https://www.acmicpc.net/problem/9711
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	T;
long long fb[10001];

void Solve()
{
	cin >> T;

	for (int t = 1 ; t <= T ; ++t)
	{
		long long P, Q;
		cin >> P >> Q;
		fb[0] = 0;
		fb[1] = 1;
		for (int i = 2 ; i <= P ; ++i)
			fb[i] = (fb[i - 1] + fb[i - 2]) % Q;
		cout << "Case #" << t << ": " << fb[P] % Q << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
