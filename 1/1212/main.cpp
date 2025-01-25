// https://www.acmicpc.net/problem/1212
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

string octa;
string binary[8] = { "000", "001", "010", "011", "100", "101", "110", "111" };

void Solve()
{
	cin >> octa;
	for (int i = 0 ; i < octa.size() ; ++i)
	{
		if (i == 0)
			cout << stoi(binary[octa[i] - '0']);
		else
			cout << binary[octa[i] - '0'];
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
