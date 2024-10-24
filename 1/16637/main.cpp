// https://www.acmicpc.net/problem/16637
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int	N;
int nums[10];
char opers[10];
int answer = 1 << 31;

int operate(char oper, int a, int b)
{
	if (oper == '+')
		return a + b;
	else if (oper == '-')
		return a - b;
	else if (oper == '*')
		return a * b;
	return (0);
}

void dfs(int nums_idx, int opers_idx, int tmp)
{
	if (nums_idx == N / 2 + 1)
	{
		answer = max(tmp, answer);
		return ;
	}
	dfs(nums_idx + 1, opers_idx + 1, operate(opers[opers_idx], tmp, nums[nums_idx]));
	if (nums_idx + 1 <= N / 2)
	{
		int secondary_res = operate(opers[opers_idx + 1], nums[nums_idx], nums[nums_idx + 1]);
		dfs(nums_idx + 2, opers_idx + 2, operate(opers[opers_idx], tmp, secondary_res));
	}
}

void Solve()
{
	cin >> N;
	int max_i = N / 2;
	for (int i = 0 ; i < max_i ; ++i)
		cin >> nums[i] >> opers[i];
	cin >> nums[max_i];
	dfs(1, 0, nums[0]);
	cout << answer << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
