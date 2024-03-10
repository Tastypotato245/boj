// https://www.acmicpc.net/problem/2839

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int arr[5010];
int ab[2] = {3, 5};

int	main(void)
{
	cin >> N;
	arr[ab[0]] = 1;
	arr[ab[1]] = 1;
	for (int i = 3; i <= N; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			if (arr[i] != 0)
			{
				if (arr[i + ab[j]] == 0)
					arr[i + ab[j]] = arr[i] + 1;
				else
					arr[i + ab[j]] = min(arr[i + ab[j]], arr[i] + 1);
			}
		}
	}
	if (arr[N] == 0)
		cout << "-1" << "\n";
	else
		cout << arr[N] << "\n";
	return (0);
}
