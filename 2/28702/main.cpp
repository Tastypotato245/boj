// https://www.acmicpc.net/problem/28702
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

bool isNum(string s)
{
	for (int i = 0 ; i < s.size() ; ++i)
		if (!isdigit(s[i]))
			return (false);
	return (true);
}

void Solve()
{
	string a, b, c;

	cin >> a >> b >> c;

	int ans = 0;
	if (isNum(a))
		ans = stoi(a) + 3;
	else if (isNum(b))
		ans = stoi(b) + 2;
	else if (isNum(c))
 		ans = stoi(c) + 1;

	if (ans % 3 == 0 && ans % 5 == 0)
		cout << "FizzBuzz" << "\n";
	else if (ans % 3 == 0)
		cout << "Fizz" << "\n";
	else if (ans % 5 == 0)
		cout << "Buzz" << "\n";
	else
		cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
