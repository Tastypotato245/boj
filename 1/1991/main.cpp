// https://www.acmicpc.net/problem/1991
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	N;
vector<pair<int, int>> v(30);

void Pre(int root)
{
	cout << (char)('A' + root);
	if (v[root].first != 0)
		Pre(v[root].first);
	if (v[root].second != 0)
		Pre(v[root].second);
}

void In(int root)
{
	if (v[root].first != 0)
		In(v[root].first);
	cout << (char)('A' + root);
	if (v[root].second != 0)
		In(v[root].second);
}

void Post(int root)
{
	if (v[root].first != 0)
		Post(v[root].first);
	if (v[root].second != 0)
		Post(v[root].second);
	cout << (char)('A' + root);
}

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		char root, left, right;
		cin >> root >> left >> right;
		if (left != '.')
			v[root - 'A'].first = left - 'A';
		if (right != '.')
			v[root - 'A'].second = right - 'A';
	}
	Pre(0);
	cout << "\n";
	In(0);
	cout << "\n";
	Post(0);
	cout << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
