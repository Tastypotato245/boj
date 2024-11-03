// https://www.acmicpc.net/problem/10867
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int	N;
set<int> s;

void Solve()
{
	cin >> N;
	int tmp;
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> tmp;
		s.insert(tmp);
	}

	for (auto item : s)
		cout << item << " ";
	cout << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
