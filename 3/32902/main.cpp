// https://www.acmicpc.net/problem/32902
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int k, n;

void Solve()
{
	cin >> k >> n;

	int min_time = n + 1;
	int max_time = k * n + 1;

	cout << min_time << " " << max_time;
}

int	main(void)
{
	ios::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);

	Solve();
	return (0);
}
