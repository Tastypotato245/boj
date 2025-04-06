// https://www.acmicpc.net/problem/1344
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

double A, B;
double dp[20][20][20];
int prime_number[7] = {2, 3, 5, 7, 11, 13, 17};

bool is_prime_number(int n)
{
	for (int i = 0 ; i < 7 ; ++i)
	{
		if (prime_number[i] == n)
			return (true);
	}
	return (false);
}

// 5분 간격 90분 게임 -> 18 번 계산
double calculation(int idx, int a, int b)
{
	if (idx == 18)
	{
		if (is_prime_number(a) or is_prime_number(b))
			return 1;
		else
			return 0;
	}
	if (dp[idx][a][b])
		return (dp[idx][a][b]);

	dp[idx][a][b] += calculation(idx + 1, a, b) * (1 - A) * (1 - B);
	dp[idx][a][b] += calculation(idx + 1, a + 1, b) * (A) * (1 - B);
	dp[idx][a][b] += calculation(idx + 1, a, b + 1) * (1 - A) * (B);
	dp[idx][a][b] += calculation(idx + 1, a + 1, b + 1) * (A) * (B);

	return (dp[idx][a][b]);
}

void Solve()
{
	cin >> A >> B;

	A /= 100;
	B /= 100;

	cout << calculation(0, 0, 0);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
