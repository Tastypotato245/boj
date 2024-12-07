// https://www.acmicpc.net/problem/9506
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int	N;

void Solve()
{
	while (1)
	{
		cin >> N;
		if (N == -1)
			break ;
		vector<int> v;
		for (int i = 1 ; i <= sqrt(N) ; ++i)
		{
			if (N % i == 0)
			{
				v.push_back(i);
				if (i != 1 && i != N / i)
					v.push_back(N / i);
			}
		}
		sort(v.begin(), v.end());
		int tmp = 0;
		for (int a : v)
			tmp += a;
		if (tmp == N)
		{
			cout << N << " = ";
			for (int i = 0 ; i < v.size() ; ++i)
			{
				if (i == v.size() - 1)
					cout << v[i] << "\n";
				else
					cout << v[i] << " + ";
			}
		}
		else
			cout << N << " is NOT perfect.\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
