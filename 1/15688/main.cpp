// https://www.acmicpc.net/problem/15688
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, arr[2000001];

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		int tmp;
		cin >> tmp;
		arr[tmp + 1000000]++;
	}
	
	for (int i = 0 ; i <= 2000000 ; ++i)
		for (int j = 0 ; j < arr[i] ; ++j)
			cout << i - 1000000 << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
