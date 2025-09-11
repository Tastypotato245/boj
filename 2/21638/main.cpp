// https://www.acmicpc.net/problem/21638
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int t1, v1, t2, v2;

void Solve()
{
	cin >> t1 >> v1 >> t2 >> v2;

    if (t2 < 0 && v2 >= 10)
		cout << "A storm warning for tomorrow! Be careful and stay home if possible!";
	else if (t1 > t2)
		cout << "MCHS warns! Low temperature\nis expected tomorrow.";
	else if (v1 < v2)
		cout << "MCHS warns! Strong wind is expected tomorrow.";
	else
    	cout << "No message";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
