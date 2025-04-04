// https://www.acmicpc.net/problem/1106
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

// 문제 분석: 냅색문제 응용

int	C, N;
// cost, human
pair<int, int> promotion[20];

// 비용에 대한 최대치: 최대 1000명 유치해야하는데, 1명당 100원이 필요하다면 100,000 까지 필요함
int dp[100001];

void Solve()
{
	cin >> C >> N;
	for (int i = 0 ; i < N ; ++i)
		cin >> promotion[i].first >> promotion[i].second;

	/** 홍보할 수 있는 인원의 제한이 없기 때문에
	 *	입력받은 홍보의 정수배 && 최대 한계까지 promotion 종류를 늘려야함
	 *  기존 냅색 문제에서 시간을 줄일 수 있는 테크닉인 1차원 배열 + 뒤에서 부터 채워나가는
	 *  방식을 사용하려 했으나, 문제 특성 상 정수배 && 최대 한계까지 promotion을 중복 적용
	 *  해야하기에, 1차원 배열 + 앞에서부터 채워나가는 방식이 떠올랐다.
	 *  원랜 앞에서부터 채워나가려면 2차원 배열을 써야 같은 물건을 중복해서 담지 않는데
	 *  이번 문제에서는 중복해서 담아야 함으로 1차원 배열로 가능해진 것
	 */
	for (int i = 0 ; i < N ; ++i)
		for (int j = promotion[i].first ; j <= 100000 ; j++)
			dp[j] = max(dp[j], dp[j - promotion[i].first] + promotion[i].second);

	for (int i = 0 ; i <= 100000 ; ++i)
	{
		if (dp[i] >= C)
		{
			cout << i;
			return ;
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
