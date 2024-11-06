// https://www.acmicpc.net/problem/2565
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	N, ans;
vector<pair<int, int> > v;
int efficiency[100];
int pick_idx = 0;

// 내가 작성한 코드는 게시판 반례 중 한 가지 케이스를 통과하지 못하였다. 단순히 최적일 것이라고 가정하고 풀이했기 때문에, 최적이 아닐 확률이 존재했다. 다음부터는 조금 더 고민하고 확실히 풀리는 것인지 검증할 필요가 있겠다.
bool isConflict()
{
	fill(efficiency, efficiency + 100, 0);
	for (int i = 0 ; i < v.size() ; ++i)
	{
		int l = v[i].first;
		int r = v[i].second;
		for (int j = 0 ; j < v.size() ; ++j)
		{
			if (i == j)
				continue ;
			int xl = v[j].first;
			int xr = v[j].second;

			if ((xl > l && xr < r) || (xl < l && xr > r))
				efficiency[i]++;
		}
	}
	pick_idx = max_element(efficiency, efficiency + v.size()) - efficiency;
	return (efficiency[max_element(efficiency, efficiency + v.size()) - efficiency]);
}

void Solve()
{
	cin >> N;

	v.resize(N);
	for (int i = 0 ; i < N ; ++i)
		cin >> v[i].first >> v[i].second;

	while (isConflict() /* 겹치는 것이 있다면*/ )
	{
		// 가장 제거 효율이 높은 전깃줄을 제거
		int j = 0;
		for (int i = 0 ; i < v.size() - 1 ; ++i)
		{
			if (i == pick_idx)
				++j;
			v[i] = v[j];
			++j;
		}
		v.pop_back();
		++ans;
	}
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
