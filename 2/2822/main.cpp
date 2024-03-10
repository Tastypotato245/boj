// https://www.acmicpc.net/problem/2822

#include <iostream>
#include <algorithm>
#include <vector>

#define N 8

using namespace std;

vector<pair<int, int> > vec;
int	Ans;

void Input()
{
	int	i = -1;
	int	val;

	while (++i < N)
	{
		cin >> val;
		vec.push_back({val, i + 1}); // make_pair(val, i + 1));
	}
}

void Solve()
{
	int	i = 2;

	sort(vec.begin(), vec.end());
	while (++i < N)
		Ans += vec[i].first;
}

void Output()
{
	int	i = 2;
	vector<int> idx_vec;

	cout << Ans << "\n";
	while (++i < N)
		idx_vec.push_back(vec[i].second);
	sort(idx_vec.begin(), idx_vec.end());
	i = -1;
	while (++i < 5)
		cout << idx_vec[i] << " ";
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Solve();
	Output();
	return (0);
}
