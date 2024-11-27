// https://www.acmicpc.net/problem/1111
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int arr[50];

bool isGood(int a, int b)
{
	int now = arr[1];
	for (int i = 2 ; i < N ; ++i)
	{
		now = now * a + b;
		if (now != arr[i])
			return (false);
	}
	return (true);
}

// binary search
void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];

	if (N == 1)
	{
		cout << "A" << "\n";
		return ;
	}
	if (N == 2)
	{
		if (arr[0] == arr[1])
			cout << arr[0] << "\n";
		else
			cout << "A" << "\n";
		return ;
	}
	
	int f = arr[0];
	int s = arr[1];

	int ans = 0;
	for (int a = -200 ; a <= 200 ; ++a)
	{
		int l = -20000, r = 20000;
		while (l <= r)
		{
			int b = (l + r) / 2;
			if (f * a + b > s)
				r = b - 1;
			else if (f * a + b < s)
				l = b + 1;
			if (f * a + b == s)
			{
				// check
				// 그 다음 규칙에도 되는지 확인
//				cout << "a: " << a << ", b: " << b << "\n";
				++ans;
				if (isGood(a, b))
				{
					cout << arr[N - 1] * a + b << "\n";
					return ;
				}
				break ;
			}
		}
	}
	cout << "B" << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
