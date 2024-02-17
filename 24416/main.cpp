// https://www.acmicpc.net/problem/24416
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
long long fibo[41];


void Solve()
{
	cin >> N;
	fibo[1] = fibo[2] = 1;
	for (int i = 3 ; i <= N ; ++i)
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	cout << fibo[N] << " " << ((N > 2) ? (N - 2) : 0) << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
