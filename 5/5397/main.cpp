// https://www.acmicpc.net/problem/5397
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

int	N;

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		string s;
		stack<char> l, r;
		cin >> s;

		for (char& a : s)
		{
			if (a == '<')
			{
				if (l.size())
				{
					r.push(l.top());
					l.pop();
				}
			}
			else if (a == '>')
			{
				if (r.size())
				{
					l.push(r.top());
					r.pop();
				}
			}
			else if (a == '-')
			{
				if (l.size())
					l.pop();
			}
			else
				l.push(a);
		}
		while (l.size())
		{
			r.push(l.top());
			l.pop();
		}
		while (r.size())
		{
			cout << r.top();
			r.pop();
		}
		cout << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
