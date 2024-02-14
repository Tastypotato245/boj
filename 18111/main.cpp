// https://www.acmicpc.net/problem/18111

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int M;
long long B;
int arr[500][500];

int max_h = 0;
int min_h = 257;

void Input()
{
	cin >> N;
	cin >> M;
	cin >> B;
	for (int i = 0 ; i < N ; ++i)
	{
		for (int j = 0 ; j < M ; ++j)
		{
			cin >> arr[i][j];
			max_h = max(max_h, arr[i][j]);
			min_h = min(min_h, arr[i][j]);
		}
	}
}

int Cal(int target_h)
{
	long long b = B;
	int h;
	int t = 0;
	for (int i = 0; i < N ; ++i)
	{
		for (int j = 0; j < M ; ++j)
		{
			int tmp = target_h - arr[i][j];
			if (tmp >= 0)
			{
				t += tmp;
				b -= tmp;
			}
			else
			{
				t += (-tmp) * 2;
				b += (-tmp);
			}
		}
	}
	if (b < 0)
		return (-1);
	return (t);
}

void Solve()
{
	int t = -1;
	int h = 0;

	for (int target_h = min_h; target_h <= max_h; ++target_h)
	{
		int tmp = Cal(target_h);
		if (tmp == -1)
			continue ;
		else
		{
			if (t == -1)
			{
				t = tmp;
				h = target_h;
			}
			else
			{
				if (t >= tmp)
				{
					t = tmp;
					h = target_h;
				}
			}
		}
	}
	cout << t << " " << h << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Solve();
	return (0);
}
