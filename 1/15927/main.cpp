// https://www.acmicpc.net/problem/15927
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

string str;

void Solve()
{
	cin >> str;

	// eval palindrome
	bool isPal = true;
	for (int i = 0 ; i < str.size() / 2 && isPal ; ++i)
		if (str[i] != str[str.size() - 1 - i])
			isPal = false;

	// eval Mono Palindrome
	bool isMono = true;
	char c = str[0];
	for (int i = 1 ; i <= str.size() / 2 && isMono ; ++i)
		if (c != str[i])
			isMono = false;

	if (isMono)
		cout << -1;
	else if (isPal)
		cout << str.size() - 1;
	else
		cout << str.size();

}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
