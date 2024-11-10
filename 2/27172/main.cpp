// https://www.acmicpc.net/problem/27172
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int arr[100000];
int ans[1000001];
bool card[1000001];

void Solve()
{
	cin >> N;

	for (int i = 0 ; i < N ; ++i)
	{
		cin >> arr[i];
		card[arr[i]] = true;
	}

	for (int i = 0 ; i < N ; ++i)
		for (int j = 2 * arr[i] ; j <= 1000000 ; j += arr[i])
		{
			if (card[j])
			{
				ans[arr[i]]++;
				ans[j]--;
			}
		}
	for (int i = 0 ; i < N ; ++i)
		cout << ans[arr[i]] << " ";
	cout << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
