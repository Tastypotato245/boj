// https://www.acmicpc.net/problem/26768
// github/Tastypotato245/boj

#include <bits/stdc++.h>

using namespace std;

int	N;

void Solve()
{
  string str; cin >> str;

  map<char, char> conversionMap = {
    {'a', '4'},
    {'e', '3'},
    {'i', '1'},
    {'o', '0'},
    {'s', '5'}
  };

  for (char& c : str) {
    if (conversionMap.find(c) != conversionMap.end())
      c = conversionMap[c];
  }

  cout << str << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
