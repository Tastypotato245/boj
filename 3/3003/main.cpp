// https://www.acmicpc.net/problem/3003
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int arr[6] = {1, 1, 2, 2, 2, 8};

void Solve()
{
	int tmp;
	for (int i = 0 ; i < 6 ; ++i)
	{
		cin >> tmp;
		cout << arr[i] - tmp << " ";
	}
	cout << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
