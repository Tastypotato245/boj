// https://www.acmicpc.net/problem/1790
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

long long	N, K;

int int_pow(int val, int cnt)
{
	int result = 1;
	while (cnt)
	{
		result *= val;
		--cnt;
	}
	return result;
}

void Solve()
{
	cin >> N >> K;
	long long sub = 9;
	long long mul = 1;
	long long ans_base = 0;
	long long ans_pos = 0;
	while (true)
	{
		if (K < sub * mul)
		{
			ans_pos = K % mul;
			ans_base += K / mul + (ans_pos != 0); 
			break;
		}
		K -= sub * mul;
		ans_base += sub;
		sub *= 10;
		++mul;
	}
//	cout << "num: " << ans_base << "\n";
//	cout << "pos: " << ans_pos << "\n";
//	cout << "mul: " << mul << "\n";
	if (N < ans_base)
		cout << "-1" << "\n";
	else
		if (ans_pos == 0)
			cout << ans_base % 10 << "\n";
		else
			cout << ans_base / int_pow(10, mul - ans_pos) % 10 << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
