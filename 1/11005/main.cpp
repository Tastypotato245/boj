// https://www.acmicpc.net/problem/11005
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, B;
char digit[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void Solve()
{
	cin >> N >> B;
	int i = 31;
	char ans[32];
	if (N == 0)
	{
		cout << "0";
		return ;
	}
	while (N)
	{
		ans[i--] = digit[N % B];
		N /= B;
	}
	while (++i < 32)
		cout << ans[i];
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
