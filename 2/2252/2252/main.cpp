// https://www.acmicpc.net/problem/2252
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

// INPUT
int	N, M;
vector<int> student[32001];
int in_degree[32001];

void Solve()
{
	cin >> N >> M;

	for (int i = 0 ; i < M ; ++i)
	{
		int A, B;
		cin >> A >> B;
		student[A].push_back(B);
		in_degree[B]++;
	}

	queue<int> q;
	// in_degree가 0인, 가장 키가 큰 학생을 찾는다.
	for (int i = 1 ; i <= N ; ++i)
		if (in_degree[i] == 0)
			q.push(i);

	while (!q.empty())
	{
		int now = q.front();
		q.pop();

		cout << now << " ";
		for (int i : student[now])
		{
			// 자기보다 큰 사람이 이제 q에 push되니, 전체적으로 degree 값을 -1로 줄인다.
			--in_degree[i];
			if (in_degree[i] == 0)
				q.push(i);
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
