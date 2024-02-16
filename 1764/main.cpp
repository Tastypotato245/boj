// https://www.acmicpc.net/problem/1764
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <set>
#include <string>
#include <vector>

using namespace std;

int	N;
int	M;

set<string> s1;
set<string> s2;
vector<string> s3;
void Solve()
{
	cin >> N >> M;
	string str;
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> str;
		s1.insert(str);
	}
	for (int i = 0 ; i < M ; ++i)
	{
		cin >> str;
		s2.insert(str);
	}
	s3.resize(s1.size() + s2.size());
	auto itr = set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), s3.begin());
	s3.erase(itr, s3.end());
	cout << s3.size() << "\n";
	for (auto& ele : s3)
		cout << ele << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
