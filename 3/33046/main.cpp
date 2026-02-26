// https://www.acmicpc.net/problem/33046
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
	int A, B, C, D;
	cin >> A >> B;
	cin >> C >> D;

	int sum1 = A + B;
	int sum2 = C + D;

	// 가동 계산
	int gadong = (sum1 - 1) % 4 + 1;

	// 진동 계산
	int jindong = (gadong - 1 + (sum2 - 1)) % 4 + 1;

	cout << jindong;
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return (0);
}
