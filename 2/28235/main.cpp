// https://www.acmicpc.net/problem/28235
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

string	s;

void Solve()
{
	cin >> s;

	if (s == "SONGDO")
		cout << "HIGHSCHOOL";
	else if (s == "CODE")
		cout << "MASTER";
	else if (s == "2023")
		cout << "0611";
	else if (s == "ALGORITHM")
		cout << "CONTEST";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
