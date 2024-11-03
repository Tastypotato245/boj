// https://www.acmicpc.net/problem/1182
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, S, ans;
int arr[20];

void dfs(int now, int idx)
{
	// 현재 합이 S랑 같으면 개수 세기
	if (now == S)
		ans++;
	for (int i = idx ; i < N ; ++i)
		dfs(now + arr[i], i + 1);
}

void Solve()
{
	cin >> N >> S;
	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];
	dfs(0, 0);
	if (S == 0)
		ans--;
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
