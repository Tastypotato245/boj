// https://www.acmicpc.net/problem/15829

#include <iostream>
#include <algorithm>
#include <string>

#define R 31
#define M 1234567891

using namespace std;

int	L;
long long ans;
string str;

void Input()
{
	cin >> L;
	cin >> str;
}

void Output()
{
	cout << ans << "\n";
}

long long Fast(int i, long long tmp)
{
	if (i == 0)
		return (1);
	if (i % 2 == 0)
		return (Fast(i / 2, tmp * tmp % M) % M);
	else
		return (Fast(i / 2, tmp * tmp % M) * tmp % M);
}

void Solve()
{
	for (int i = 0 ; i < L ; ++i)
	{
		 ans += (str[i] - 'a' + 1) * (Fast(i , R) % M) % M;
		 ans %= M;
	}
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Solve();
	Output();
	return (0);
}
