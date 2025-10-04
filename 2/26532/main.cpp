// https://www.acmicpc.net/problem/26532
// github/Tastypotato245/boj

#include <bits/stdc++.h>

using namespace std;

void Solve()
{

	int width, length; cin >> width >> length;


	int sqYard = width * length;

	double acreToYard = 4840.0;
	double cntCorn = 5.0;

	double acres = (double)sqYard / acreToYard;
	int bags = ceil(acres / cntCorn);

	cout << bags << "\n";

}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
