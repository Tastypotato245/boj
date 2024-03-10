// https://www.acmicpc.net/problem/2798

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int	N;
int M;
int ans;

vector<int> v;
int arr[3];

void Input()
{
	cin >> N;
	cin >> M;
	v.resize(N);
	for (int i = 0 ; i < N ; ++i)
		cin >> v[i];
}

void Solve(int len, int pos)
{
	if (len == 3)
	{
		int sum = arr[0] + arr[1] + arr[2];
		if (sum <= M)
			ans = max(ans, sum);
		return ;
	}
	while (pos < N)
	{
		arr[len] = v[pos];
		Solve(len + 1, pos + 1);
		++pos;
	}
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Solve(0, 0);
	cout << ans << "\n";
	return (0);
}
