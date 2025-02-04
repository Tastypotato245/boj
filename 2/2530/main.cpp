// https://www.acmicpc.net/problem/2530
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	A, B, C, D;

void Solve()
{
	cin >> A >> B >> C >> D;

	int carry_b = (C + D) / 60;
	int carry_a = (B + carry_b) / 60;
	cout << (A + carry_a) % 24 << " ";
	cout << (B + carry_b) % 60 << " ";
	cout << (C + D) % 60;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
