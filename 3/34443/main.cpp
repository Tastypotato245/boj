// https://www.acmicpc.net/problem/34443
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
    int N, C, P;
    cin >> N >> C >> P;
    
    // 총 기대 상품 가치 = N * P
    long long totalPrize = 1LL * N * P;
    
    cout << totalPrize;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
