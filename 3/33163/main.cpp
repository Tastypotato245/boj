// https://www.acmicpc.net/problem/33163
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	cin >> N;

	string S;
	cin >> S;

	for (int i = 0; i < N; i++)
	{
		if (S[i] == 'J')
			S[i] = 'O';
		else if (S[i] == 'O')
			S[i] = 'I';
		else if (S[i] == 'I')
			S[i] = 'J';
	}

	cout << S;
}

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
