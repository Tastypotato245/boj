// https://www.acmicpc.net/problem/34691
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

string s;

void Solve()
{
	while (true)
	{
		cin >> s;
		if (s == "end")
			break;
		if (s == "animal")
			cout << "Panthera tigris\n";
		else if (s == "flower")
			cout << "Forsythia koreana\n";
		else if (s == "tree")
			cout << "Pinus densiflora\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
