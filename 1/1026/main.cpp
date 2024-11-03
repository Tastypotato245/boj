// https://www.acmicpc.net/problem/1026
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int a[50];
int b[50];

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
		cin >> a[i];
	sort(a, a + N);
	for (int i = 0 ; i < N ; ++i)
		cin >> b[i];
	sort(b, b + N, greater<>());
	int ans = 0;
	for (int i = 0 ; i < N ; ++i)
		ans += a[i] * b[i];
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
