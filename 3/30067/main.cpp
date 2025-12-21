// https://www.acmicpc.net/problem/30067
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	long long arr[10];
	long long sum = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	for (int i = 0; i < 10; i++)
	{
		if (sum - arr[i] == arr[i])
		{
			cout << arr[i];
			return;
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return 0;
}
