// https://www.acmicpc.net/problem/1441_2
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
long long arr[200000];
int odd;

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> arr[i];
		if (arr[i] % 2 == 1)
			++odd;
	}

	// 홀수가 홀수개면 홀수로 나눌 수 있음
	if (odd % 2 == 1)
	{
		cout << 1 << "\n";
		return ;
	}

	// 짝수는 해봐야함
	// 진행하면서 원소가 짝수이면서 홀수가 나올 때까지 쭉 더하고, 끝까지 했을 때 나오는 그룹의 개수를 세면 됨
	long long now = 0;
	int group = 0;
	for (int i = 0 ; i < N ; ++i)
	{
		now += arr[i];
		if (now % 2 == 0)
		{
			++group;
			now = 0;
		}
	}

	if (now % 2 == 1 || group == 1)
		cout << 0 << "\n";
	else
		cout << 1 << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
