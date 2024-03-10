// https://www.acmicpc.net/problem/1662

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string str;

int Recur(int *pos)
{
	int cnt = 0;
	for (;*pos < str.size() && str[*pos] != ')'; ++(*pos))
	{
		if (*pos != str.size() - 1 && str[*pos + 1] == '(')
		{
			int tmp = str[*pos] - '0';
			cnt += tmp * Recur(&(++(*pos)));
		}
		else if (str[*pos] >= '0' && str[*pos] <= '9')
			++cnt;
	}
	return (cnt);
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int pos = 0;

	cin >> str;
	cout << Recur(&pos) << "\n";
	return (0);
}
