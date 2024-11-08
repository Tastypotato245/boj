// https://www.acmicpc.net/problem/2467
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int	N;
int arr[100000];

void Solve()
{
	cin >> N;

	// input
	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];

	// two pointer
	int l = 0, r = N - 1;
	int best_l = -1, best_r = -1, best_solution = 2000000001;
	while (l < r)
	{
		int new_solution = arr[l] + arr[r];
		if (abs(new_solution) < abs(best_solution))
		{
			best_solution = new_solution;
			best_l = l;
			best_r = r;
		}
		if (new_solution <= 0)
			++l;
		else
			--r;
	}
	cout << arr[best_l] << " " << arr[best_r] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
