// https://www.acmicpc.net/problem/17009
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int apple_score = 0, banana_score = 0;

void Solve()
{
	for (int i = 0 ; i < 3 ; ++i)
	{
		int tmp;
		cin >> tmp;
		apple_score += tmp * (3 - i);
	}
	for (int i = 0 ; i < 3 ; ++i)
	{
		int tmp;
		cin >> tmp;
		banana_score += tmp * (3 - i);
	}
	if (apple_score > banana_score)
		cout << "A";
	else if (apple_score < banana_score)
		cout << "B";
	else
		cout << "T";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
