// https://www.acmicpc.net/problem/2751

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[2000001];

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int tmp;
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> tmp;
		arr[tmp + 1000000] = 1;
	}
	for (int i = 0 ; i < 2000001 ; ++i)
		if (arr[i] == 1)
			cout << i - 1000000 << "\n";
	return (0);
}
