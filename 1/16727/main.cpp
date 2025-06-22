// https://www.acmicpc.net/problem/16727
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
	int a[4];

	for (int i = 0; i < 4; i++)
		cin >> a[i];

	if (a[0] + a[3] > a[1] + a[2]) cout << "Persepolis\n";
	else if (a[0] + a[3] < a[1] + a[2])cout << "Esteghlal\n";
	else
	{
		if(a[1] == a[3])
			cout << "Penalty\n";
		else
		{
			if(a[1]<a[3])
				cout << "Persepolis\n";
			else
				cout << "Esteghlal\n";
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
