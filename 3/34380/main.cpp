// https://www.acmicpc.net/problem/34380
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
    int M, V;
    cin >> M >> V; // 점수 입력 (사실 계산에 쓰이지 않음)

    int n;
    cin >> n; // Blaster가 달린 yard line

    int K;
    cin >> K;

    int total = 40 + 2 * n; // 총 달린 거리 계산
    cout << total;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
