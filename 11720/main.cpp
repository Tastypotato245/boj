// https://www.acmicpc.net/problem/11720
#include <iostream>
#include <string>

using namespace std;

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int	N;
	string s;
	int	ans = 0;

	cin >> N;
	cin >> s;
	for (int i = 0; i < N; ++i)
		ans += s[i] - '0';
	cout << ans << "\n";
	return (0);
}
