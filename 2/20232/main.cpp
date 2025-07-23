// https://www.acmicpc.net/problem/20232
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
	int year;
	cin >> year;

	if(year == 1996 || year == 1997 || year == 2000 ||
			year == 2007 || year == 2008 || year == 2013 || year == 2018
	  )
		cout << "SPbSU";
	else if(year == 2006)
		cout << "PetrSU, ITMO";
	else
		cout <<  "ITMO";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
