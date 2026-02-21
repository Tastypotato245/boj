// https://www.acmicpc.net/problem/32776
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int S_ab;
int M_a, F_ab, M_b;

void Solve()
{
	cin >> S_ab;
	cin >> M_a >> F_ab >> M_b;

	int flight_time = M_a + F_ab + M_b;

	// 조건 1: 항공편이 더 오래 걸리거나 같은 경우
	// 조건 2: 철도 시간이 4시간(240분) 이하인 경우
	if (flight_time >= S_ab || S_ab <= 240)
		cout << "high speed rail";
	else
		cout << "flight";
}

int	main(void)
{
	ios::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);

	Solve();
	return (0);
}
