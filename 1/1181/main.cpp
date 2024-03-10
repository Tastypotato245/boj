// https://www.acmicpc.net/problem/1181

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


bool Comp(string s1, string s2)
{
	if (s1.size() == s2.size())
		return (s1 < s2);
	else
		return (s1.size() < s2.size());
}

vector<string>	s;
int	main(void)
{
	int		n;
	string	tmp;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> tmp;
		s.push_back(tmp);
	}
	sort(s.begin(), s.end(), Comp);
	s.erase(unique(s.begin(), s.end()), s.end());
	for (int i = 0; i < s.size(); ++i)
		cout << s[i] << "\n";
	return (0);
}
