// https://www.acmicpc.net/problem/11723
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int	M;
int	tmp;
string str;
int S[21];

void Input()
{
	cin >> M;
}

void Output()
{
}

void Solve()
{
	for (int i = 0 ; i < M ; ++i)
	{
		cin >> str;
		if (str.compare("add") == 0)
		{
			cin >> tmp;
			S[tmp] = 1;
		}
		else if (str.compare("remove") == 0)
		{
			cin >> tmp;
			S[tmp] = 0;
		}
		else if (str.compare("check") == 0)
		{
			cin >> tmp;
			cout << (int)(S[tmp] == 1) << "\n";
		}
		else if (str.compare("toggle") == 0)
		{
			cin >> tmp;
			S[tmp] = !S[tmp];
		}
		else if (str.compare("all") == 0)
			fill_n(S, 21, 1);
		else if (str.compare("empty") == 0)
			fill_n(S, 21, 0);
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Input(); Solve(); Output();
	return (0);
}
