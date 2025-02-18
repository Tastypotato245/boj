// https://www.acmicpc.net/problem/14581
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

string s;
string fan = ":fan:";

void Solve()
{
	cin >> s;

	cout << fan << fan << fan << "\n";
	cout << fan << ":" << s << ":" << fan << "\n";
	cout << fan << fan << fan << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
