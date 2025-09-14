// https://www.acmicpc.net/problem/25640
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string MBTI;
int N, ans;

void Solve()
{
	cin >> MBTI;
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		string temp;
		cin >> temp;
		if (temp == MBTI)
			++ans;
	}
	cout << ans;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
