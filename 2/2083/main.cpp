// https://www.acmicpc.net/problem/2083
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

string s;
int age, weight;

void Solve()
{
	while (true)
	{
		cin >> s;
		cin >> age >> weight;
		if (s == "#" && age == 0 && weight == 0)
			break ;
		cout << s << " ";
		if (age > 17 || weight >= 80)
			cout << "Senior\n";
		else
			cout << "Junior\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
