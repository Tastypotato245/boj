// https://www.acmicpc.net/problem/26766
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;

	for (int i = 0 ; i < N ; ++i)
	{
		cout << " @@@   @@@ \n" ;
		cout << "@   @ @   @\n";
		cout << "@    @    @\n";
		cout << "@         @\n";
		cout << " @       @ \n";
		cout << "  @     @  \n";
		cout << "   @   @   \n";
		cout << "    @ @    \n";
		cout << "     @     \n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
