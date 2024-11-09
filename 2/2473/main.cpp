// https://www.acmicpc.net/problem/2473
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int	N;
long long arr[5000];
long long ans[3];

void Solve()
{
	cin >> N;

	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];
	sort(arr, arr + N);

	long long best_solution = 3000000000;
	for (int i = 0 ; i < N ; ++i)
	{
		int l = i + 1, r = N - 1;
		while (l < r)
		{
			long long new_solution = arr[i] + arr[l] + arr[r];
			if (abs(best_solution) > abs(new_solution))
			{
				best_solution = new_solution;
				ans[0] = arr[i];
				ans[1] = arr[l];
				ans[2] = arr[r];
			}
			if (new_solution < 0)
				++l;
			else
				--r;
		}
	}
	cout << ans[0]  << " ";
	cout << ans[1]  << " ";
	cout << ans[2]  << " ";
	cout <<  "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
