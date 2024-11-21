// https://www.acmicpc.net/problem/3015
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;
using ii = pair<int, int>;

int	N, ans;

// double stack
void Solve()
{
	cin >> N;

	// 스택에는 압축해서 저장할 거임. 새로운 사람의 키가 들어올 때, top의 키와 비교해서 더 작으면 +1, 크거나 같으면 압축되어서 볼 수 있는 사람의 수가 저장된 cnt만큼 답에 더해줌. stack이 비거나, 더 이상 top에 작은 사람이 오지 않으면 끝난 후 ans ++1됨.
	stack<ii> s;
	long long ans = 0;
	for (int i = 0 ; i < N ; ++i)
	{
		int now;
		cin >> now;
		int cnt = 1; // default count 1
		while (s.size() && s.top().second <= now) // 현재 입력된 사람의 키가 stack의 top의 키보다 크면
		{
			ans += s.top().first; // 볼 수 있는 사람 수만큼 ans 에 더해줌
			if (s.top().second == now)
				cnt += s.top().first;
			s.pop();
		}
		if (s.size())
			++ans;
		s.push({cnt, now});
	}
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
