// https://www.acmicpc.net/problem/1541
// github/Tastypotato245

#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

int	N;
int ans = -1;
bool flag = false;

void Solve()
{
	char tmp;
	int a = 0;
	int sum = 0;
	int tmp_sum = 0;
	while (cin >> tmp)
	{
		if (isdigit(tmp))
			a = a * 10 + (tmp - '0');
		else
		{
			if (tmp == '+')
			{
				if (flag == true)
				{
					tmp_sum += a;
				}
				else
				{
					sum += a;
				}
			}
			else if (tmp == '-')
			{
				if (flag == false)
				{
					sum += a;
					flag = true;
				}
				else
				{
					tmp_sum += a;
					sum -= tmp_sum;
					tmp_sum = 0;
				}
			}
//			cout << "a: " << a << "\n";
			a = 0;
		}
	}
	if (flag == true)
	{
		tmp_sum += a;
		sum -= tmp_sum;
	}
	else
	{
		sum += a;
	}
	cout << sum << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
