// https://www.acmicpc.net/problem/28249
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<string, int> m = {
	{"Poblano", 1500},
	{"Mirasol", 6000},
	{"Serrano", 15500},
	{"Cayenne", 40000},
	{"Thai", 75000},
	{"Habanero", 125000}
};

void Solve()
{
	int n;
	cin >> n;

	int totlaSHU = 0;
	for (int i = 0; i < n; i++)
	{
		string pepper; cin >> pepper;
		totlaSHU += m[pepper];
	}
	cout << totlaSHU << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
