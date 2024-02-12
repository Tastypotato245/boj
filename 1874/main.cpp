// https://www.acmicpc.net/problem/1874

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

int n;
int arr[100000];
stack<int> s;
vector<char> ans;

void Input()
{
	int tmp;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
}

void Output()
{
	for (int i = 0; i < ans.size(); ++i)
		cout << ans[i] << "\n";
}

void Solve()
{
	int i = 0;
	int j = 1;

	s.push(0);
	while (i < n)
	{
		if (s.top() == arr[i])
		{
			s.pop();
			ans.push_back('-');
			++i;
		}
		else
		{
			if (j > n)
				break ;
			while (s.top() != arr[i] && j <= n)
			{
				s.push(j);
				ans.push_back('+');
				++j;
			}
		}
	}
	if (s.top() != 0)
		cout << "NO" << "\n";
	else
		Output();
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Solve();
	return (0);
}
