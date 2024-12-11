// https://www.acmicpc.net/problem/20920
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;
using si = pair<string, int>;

int	N, M;
map<string, int> m;
vector<si> v;

bool comp(si a, si b)
{
	if (a.second > b.second)
		return true;
	else if (a.second < b.second)
		return false;
	else
	{
		if (a.first.size() > b.first.size())
			return true;
		else if (a.first.size() < b.first.size())
			return false;
		else
		{
			if (a.first < b.first)
				return true;
			else
				return false;
		}
	}
}

void Solve()
{
	cin >> N >> M;

	for (int i = 0 ; i < N ; ++i)
	{
		string s;
		cin >> s;
		if (s.size() >= M)
		{
			m[s]++;
		}
	}
	for (auto item : m)
		v.emplace_back(item);
	sort(v.begin(), v.end(), comp);
	for (auto item : v)
		cout << item.first << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
