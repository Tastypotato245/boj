// https://www.acmicpc.net/problem/5525
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

//int	N;
//int	M;
//int cnt;
//int tmp_cnt;
//char c;
//int flag;

//void Solve()
//{
//	cin >> N;
//	cin >> M;
//	for (int i = 0 ; i < M ; ++i)
//	{
//		cin >> c;
//		if (flag != 2 && c == 'I')
//		{
//			if (tmp_cnt >= N)
//				cnt += tmp_cnt - N + 1;
//			tmp_cnt = 0;
//			flag = 1;
//		}
//		else if (flag == 1 && c == 'O')
//		{
//			flag = 2;
//		}
//		else if (flag == 2 && c == 'I')
//		{
//			++tmp_cnt;
//			flag = 1;
//		}
//		else
//		{
//			if (tmp_cnt >= N)
//				cnt += tmp_cnt - N + 1;
//			tmp_cnt = 0;
//			flag = 0;
//		}
//	}
//	if (tmp_cnt >= N)
//		cnt += tmp_cnt - N + 1;
//	cout << cnt << "\n";
//}

void Solve()
{
	string s;
	int N, M, answer = 0;

	cin >> N >> M >> s;
	for (int i = 0; i < M; i++)
	{
		if (s[i] == 'I')
		{
			int cnt = 0;
			while (s[i + 1] == 'O' && s[i + 2] == 'I')
			{
				i += 2, ++cnt;
				if (cnt == N) cnt--, answer++;
			}
		}
	}
	cout << answer << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
