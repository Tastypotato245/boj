// https://www.acmicpc.net/problem/1027
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int	N;

void Solve()
{
	cin >> N;
	vector<int> v(N);
	vector<int> score(N);

	for (int i = 0 ; i < N ; ++i)
	{
		cin >> v[i];
		score[i] = 0;
	}

	for (int i = 0 ; i < N ; ++i)
	{
		// 오른 쪽 빌딩만 볼거임 왼쪽에서 보이는 건 그 전 단계에서 기록해줄 거임
		for (int j = i + 1 ; j < N ; ++j)
		{
			/** 
			 *	== 선분 AB가 최고 높이 빌딩과 접하거나 관통하지는 않는가
			 * 만약 더 크다면 그렇지 않은것이고, 작다면 B빌딩을 볼 수 없음
			 */ 

			bool can_see = true;

			double escalation_a_to_b = (v[j] - v[i]) / (double)(j - i);
			for (int k = i + 1 ; k < j ; ++k)
			{
				double escalation_a_to_k = (v[k] - v[i]) / (double)(k - i);
				if (escalation_a_to_b <= escalation_a_to_k)
				{
					can_see = false;
					break ;
				}
			}

			if (can_see)
			{
				//볼 수 있다면 i번째 빌딩(A)의 오른쪽으로 볼 수 있는 score를 증가시키고,
				score[i]++;
				//j번째 빌딩(B) 기준으로 왼쪽에서 볼 수 있는 score를 +1 증가시킴
				score[j]++;
			}
		}
	}

	cout << *max_element(score.begin(), score.end());
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
