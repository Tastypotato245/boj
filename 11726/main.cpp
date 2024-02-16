// https://www.acmicpc.net/problem/11726
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

short fibo[1001];

void Solve()
{
	cin >> N;
	fibo[0] = fibo[1] = 1;
	for (int i = 2; i <= N; ++i)
		fibo[i] = (fibo[i - 1] + fibo[i - 2]) % 10007;
	cout << fibo[N] << "\n" ;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
