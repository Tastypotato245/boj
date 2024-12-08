// https://www.acmicpc.net/problem/17103
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	T, N;
bool era[1000001];
vector<int> v;

void Solve()
{

	//에라토스
	era[0] = true;
	era[1] = true;
	for (int i = 2 ; i * i <= 1000000 ; ++i)
		for (int j = i * i ; j <= 1000000 ; j += i)
			if (!era[j])
				era[j] = true;

	for (int i = 2 ; i <= 1000000 ; ++i)
		if (!era[i])
			v.push_back(i);

	cin >> T;
	for (int t = 0 ; t < T ; ++t)
	{
		cin >> N;
		int ans = 0;
		for (int i = 0 ; v[i] < N ; ++i)
		{
			int val = N - v[i];
			if (!era[val])
				++ans;
		}
		cout << ans / 2 + (ans % 2) << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
