// https://www.acmicpc.net/problem/16199
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	yy1, m1, d1;
int y2, m2, d2;
int year1, year2, year3;

void Solve()
{
	cin >> yy1 >> m1 >> d1;
    cin >> y2 >> m2 >> d2;

	if (m1 < m2)
        year1 = y2 - yy1;
    else if (m1 == m2 && d1 <= d2)
        year1 = y2 - yy1;
    else
        year1 = y2 - yy1 - 1;

    year2 = y2 - yy1 + 1;

    year3 = y2 - yy1;

	cout << year1 << "\n";
	cout << year2 << "\n";
	cout << year3 << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
