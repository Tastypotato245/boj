// https://www.acmicpc.net/problem/
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
string s;

void Solve()
{
	cin >> N;
	cin.ignore();
	for (int i = 1 ; i <= N ; ++i)
	{
        getline(cin, s);
		cout << i << ". " << s << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
