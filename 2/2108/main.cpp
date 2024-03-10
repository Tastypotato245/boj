// https://www.acmicpc.net/problem/2108

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int	N;
double	avg;
int	mid;
int	hf;
int	range;
vector<int> v;
vector<pair<int, int> > hf_v;
vector<int> hf_v2;

void Input()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
		avg += tmp;
	}
	sort(v.begin(), v.end());
//	for (int i = 0 ; i < v.size() ; ++i) cout << "v: " << v[i] << "\n";
	for (int i = 0 ; i < v.size() ; ++i)
	{
		if (hf_v.empty() || hf_v.back().second != v[i])
			hf_v.push_back({1, v[i]});
		else
			hf_v.back().first += 1;
	}
	sort(hf_v.begin(), hf_v.end());
//	for (int i = 0 ; i < hf_v.size() ; ++i) cout << "f: " << hf_v[i].first << "| s: " << hf_v[i].second << "\n";
	for (int i = 0 ; i < hf_v.size() ; ++i)
		if (hf_v[i].first == hf_v.back().first)
			hf_v2.push_back(hf_v[i].second);
	sort(hf_v2.begin(), hf_v2.end());
}

void Output()
{
	cout << (int)avg << "\n";
	cout << mid << "\n";
	cout << hf << "\n";
	cout << range << "\n";
}

void Solve()
{
	int m = 0;

	avg = round(avg / N);
	mid = v[v.size() / 2];
	if (hf_v2.size() > 1)
		hf = hf_v2[1];
	else
		hf = hf_v2.front();
	range = v.back() - v.front();
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
