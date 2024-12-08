// https://www.acmicpc.net/problem/4948
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	N;
vector<int> v;
bool arr[300001];

void Solve()
{
	arr[0] = true;
	arr[1] = true;
	for (int i = 2 ; i * i <= 300000 ; ++i)
		for (int j = i * i ; j <= 300000 ; j += i)
			if (!arr[j])
				arr[j] = true;

	for (int i = 1 ; i <= 300000 ; ++i)
		if (!arr[i])
			v.push_back(i);

	while (1)
	{
		cin >> N;
		if (N == 0)
			break ;
		cout << upper_bound(v.begin(), v.end(), 2 * N) - upper_bound(v.begin(), v.end(), N) << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
