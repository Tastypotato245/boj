// https://www.acmicpc.net/problem/30087
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;

	string s;
	for (int i = 0 ; i < N ; ++i)
	{
		cin >> s;
		if (s == "Algorithm") cout << "204";
		else if (s == "DataAnalysis") cout << "207";
		else if (s == "ArtificialIntelligence") cout << "302";
		else if (s == "CyberSecurity") cout << "B101";
		else if (s == "Network") cout << "303";
		else if (s == "Startup") cout << "501";
		else if (s == "TestStrategy") cout << "105";
		cout << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
