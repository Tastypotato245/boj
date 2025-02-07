// https://www.acmicpc.net/problem/16170
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <ctime>

using namespace std;

void Solve()
{
	time_t timer;
	struct tm* t;

	timer = time(NULL);
	t = localtime(&timer);

	cout << t->tm_year + 1900 << "\n";
	cout << t->tm_mon + 1 << "\n";
	cout << t->tm_mday << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
