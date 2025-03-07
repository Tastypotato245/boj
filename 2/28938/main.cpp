// https://www.acmicpc.net/problem/28938
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, sum;

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		int tmp;
		cin >> tmp;
		sum += tmp;
	}
	if (sum > 0)
		cout << "Right";
	else if (sum < 0)
		cout << "Left";
	else
		cout << "Stay";

}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
