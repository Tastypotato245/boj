// https://www.acmicpc.net/problem/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int	N;
//vector<tuple<int, int, string>> v;
//
//bool Comp(tuple<int, int, string> a, tuple<int, int, string> b)
//{
//	if (get<0>(a) != get<0>(b))
//		return (get<0>(a) < get<0>(b));
//	return (get<1>(a) < get<1>(b));
//}

bool Comp(const pair<int, string> &a, const pair<int, string> &b)
{
	if (a.first == b.first)
		return (false);
	return (a.first < b.first);
}


vector<pair<int, string> > v;
void Input()
{
	cin >> N;
	v.resize(N);
	for (int i = 0; i < N; ++i)
	{
		cin >> v[i].first >> v[i].second;
//		v.push_back({tmp_i, i, tmp_str});
	}
}

//void Output()
//{
//	for (int i = 0; i < N; ++i)
//		cout << get<0>(v[i]) << " " << get<2>(v[i]) << "\n";
//}

void Output()
{
	for (int i = 0; i < N; ++i)
		cout << v[i].first << " " << v[i].second << "\n";
}

void Solve()
{
	stable_sort(v.begin(), v.end(), Comp);
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
