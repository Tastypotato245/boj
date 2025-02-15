// https://www.acmicpc.net/problem/8437
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;


/*
   sum = claudia + natalia
   sub = claudia - natalia

   but solve python
*/

int	sum, sub, claudia, natalia;
void Solve()
{
	cin >> sum >> sub;
	claudia = (sum + sub) / 2;
	natalia = (sum - sub) / 2;
	cout << claudia << "\n";
	cout << natalia << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
