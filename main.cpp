// https://www.acmicpc.net/problem/18185
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int cost = 0;
int arr[10003];

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];

	for (int i = 0 ; i < N ; ++i)
	{
		while (arr[i])
		{
			if (arr[i + 1] && arr[i + 2] && arr[i + 1] <= arr[i + 2])
			{
				arr[i]--;
				arr[i + 1]--;
				arr[i + 2]--;
				cost += 7;
//				cout << "i: " << i << "\t | cost : " << cost << "\n";
			}
			else if (arr[i + 1])
			{
				arr[i]--;
				arr[i + 1]--;
				cost += 5;
//				cout << "i: " << i << "\t | cost : " << cost << "\n";
			}
			else
			{
				arr[i]--;
				cost += 3;
//				cout << "i: " << i << "\t | cost : " << cost << "\n";
			}
		}
	}
	cout << cost << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
