// https://www.acmicpc.net/problem/10170
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
	cout << "NFC West       W   L  T\n";
	cout << "-----------------------\n";
	cout << "Seattle        13  3  0\n";
	cout << "San Francisco  12  4  0\n";
	cout << "Arizona        10  6  0\n";
	cout << "St. Louis      7   9  0\n";
	cout << "\n";
	cout << "NFC North      W   L  T\n";
	cout << "-----------------------\n";
	cout << "Green Bay      8   7  1\n";
	cout << "Chicago        8   8  0\n";
	cout << "Detroit        7   9  0\n";
	cout << "Minnesota      5  10  1\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
