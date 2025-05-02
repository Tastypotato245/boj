// https://www.acmicpc.net/problem/6841
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<string, string> m;

void Solve()
{
	m["CU"] = "see you";
	m[":-)"] = "I’m happy";
	m[":-("] = "I’m unhappy";
	m[";-)"] = "wink";
	m[":-P"] = "stick out my tongue";
	m["(~.~)"] = "sleepy";
	m["TA"] = "totally awesome";
	m["CCC"] = "Canadian Computing Competition";
	m["CUZ"] = "because";
	m["TY"] = "thank-you";
	m["YW"] = "you’re welcome";
	m["TTYL"] = "talk to you later";

	while (true)
	{
		string s;
		cin >> s;
		if (m.find(s) == m.end())
			cout << s << "\n";
		else
			cout << m[s] << "\n";
		if (s == "TTYL")
			break ;
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
