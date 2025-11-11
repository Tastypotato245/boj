// https://www.acmicpc.net/problem/28074
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

char word[5] = { 'M', 'O', 'B', 'I', 'S' };

void Solve()
{
	string s; cin >> s; 

	for (int i = 0; i < 5; i++)
	{
		if (find(s.begin(), s.end(), word[i]) == s.end())
		{
			cout << "NO" << endl; 
			return; 
		}
	}
	cout << "YES" << endl;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
