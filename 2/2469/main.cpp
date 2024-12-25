// https://www.acmicpc.net/problem/2469
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

int	k, n;
string src = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", dst, ans, wrong = "xxxxxxxxxxxxxxxxxxxxxxxxx";
char board[1000][25];

void Solve()
{
	cin >> k >> n;
	src = src.substr(0, k);
	wrong = wrong.substr(0, k - 1);
	cin >> dst;
	for (int i = 0 ; i < n ; ++i)
		for (int j = 0 ; j < k - 1 ; ++j)
			cin >> board[i][j];
	for (int i = 0 ; board[i][0] != '?' ; ++i)
		for (int j = 0 ; j < k - 1 ; ++j)
		{
			if (board[i][j] == '-')
			{
				char tmp = src[j];
				src[j] = src[j + 1];
				src[j + 1] = tmp;
			}
		}

	for (int i = n - 1 ; board[i][0] != '?' ; --i)
		for (int j = 0 ; j < k - 1 ; ++j)
		{
			if (board[i][j] == '-')
			{
				char tmp = dst[j];
				dst[j] = dst[j + 1];
				dst[j + 1] = tmp;
			}
		}
	
	for (int j = 0 ; j < k - 1 ; ++j)
	{
		if (src[j] == dst[j])
			ans += '*';
		else if (src[j] == dst[j + 1] && src[j + 1] == dst[j])
		{
			ans += '-';
			char tmp = src[j];
			src[j] = src[j + 1];
			src[j + 1] = tmp;
		}
		else
		{
			ans = wrong;
			break ;
		}
	}
	cout << ans;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
