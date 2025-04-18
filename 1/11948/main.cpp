// https://www.acmicpc.net/problem/11948
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int science[4];
int social[2];

void Solve()
{
	for (int i = 0 ; i < 4 ; ++i)
		cin >> science[i];
	for (int i = 0 ; i < 2 ; ++i)
		cin >> social[i];
	sort(science, science + 4);
	sort(social, social + 2);
	cout << science[1] + science[2] + science[3] + social[1];
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
