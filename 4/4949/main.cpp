// https://www.acmicpc.net/problem/4949

#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

bool Solve(const string &str)
{
	stack<int> s;
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] == '[')
			s.push(0);
		else if (str[i] == '(')
			s.push(1);
		else if (str[i] == ']')
		{
			if (s.empty() || s.top() != 0)
				return (false);
			s.pop();
		}
		else if (str[i] == ')')
		{
			if (s.empty() || s.top() != 1)
				return (false);
			s.pop();
		}
	}
	return (s.empty());
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (1)
	{
		string str;
		getline(cin, str);
		if (str.compare(".") == 0)
			break; ;
		if (Solve(str))
			cout << "yes" << "\n";
		else
			cout << "no" << "\n";
	}
	return (0);
}
