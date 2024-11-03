// https://www.acmicpc.net/problem/1406
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;

int	M;
string str;
deque<char> strl;
deque<char> strr;

void Solve()
{
	cin >> str;

	for (int i = 0 ; i < str.size() ; ++i)
		strl.push_back(str[i]);

	cin >> M;
	char cmd;
	char tmp;
	for (int i = 0 ; i < M ; ++i)
	{
		cin >> cmd;
		if (cmd == 'P')
		{
			cin >> tmp;
			strl.push_back(tmp);
		}
		else if (cmd == 'L' && strl.size() != 0)
		{
			strr.push_front(strl.back());
			strl.pop_back();
		}
		else if (cmd == 'D' && strr.size() != 0)
		{
			strl.push_back(strr.front());
			strr.pop_front();
		}
		else if (cmd == 'B' && strl.size() != 0)
			strl.pop_back();
	}
	string s;
	s.append(strl.begin(), strl.end());
	s.append(strr.begin(), strr.end());
	cout << s << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
