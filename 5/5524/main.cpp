// https://www.acmicpc.net/problem/5524
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int	N;

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		string s;
		cin >> s;
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		cout << s << "\n";
	}

}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
