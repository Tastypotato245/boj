// https://www.acmicpc.net/problem/27541
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
	int n;
	cin >> n;
	string input; cin >> input;

	if (input[n - 1] == 'G') input.erase(n - 1, 1);
	else input.push_back('G');

	cout << input << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
