// https://www.acmicpc.net/problem/1107
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

string str;
int	M;
int ans;
int broken[10];

void Input()
{
	cin >> str;
	cin >> M;
	int tmp;
	for (int i = 0 ; i < M ; ++i)
	{
		cin >> tmp; 
		broken[tmp] = 1;
	}
}

void Output()
{
	cout << ans << "\n";
}

void JustUpDown()
{
	ans = abs(stoi(str) - 100);
}

void Recur(int len, int channel)
{
	if (len != 0)
		ans = min(ans, len + abs(stoi(str) - channel));
	if (len == str.size() + 1)
		return ;
	for (int i = 0 ; i < 10 ; ++i)
	{
		if (broken[i] == 1)
			continue ;
		Recur(len + 1, channel * 10 + i);
	}
}

void Solve()
{
	JustUpDown();
	Recur(0, 0);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Input(); Solve(); Output();
	return (0);
}
