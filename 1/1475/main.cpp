// https://www.acmicpc.net/problem/1475
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

string s;
int nums[10];

void Solve()
{
	cin >> s;

	for (char item : s)
		nums[item - '0']++;

	nums[6] = nums[9] = (nums[6] + nums[9] + 1) / 2;
	cout << *max_element(nums, nums + 10);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
