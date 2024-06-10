// https://www.acmicpc.net/problem/2098
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>
#define INT_INF 20000000

using namespace std;

int	N;
int arr[17][17];
int best = INT_INF;

// first int 000{5bit for now node} 000{5 bit for start_node} {16 bit for left_nodes sequence}
// second int g
// third int h
struct s_node
{
	int info;
	int g;
	int h;

	s_node(int init_info, int init_g, int init_h) : info(init_info), g(init_g), h(init_h) {}
};

bool operator<(const s_node& a, const s_node& b)
{
	return a.h > b.h;
}

priority_queue<s_node> pq;

//tmp node의 정보를 기반으로 h값 결정
void bounded_function(s_node& tmp)
{
	tmp.h = 0;
	//i에서 j로 가는데, i가 될 수 있는 것은 now node와 left nodes에 속한 노드들,
	//대신 now node는 start node로 갈 수 없음
	
	int now = tmp.info >> 24;
	int start = (tmp.info << 8) >> 16;
	int left_node = (tmp.info << 16) >> 16;

	int m = INT_INF;
	// now에서 갈 수 있는 것은 left nodes만. 그 중 min찾기
	for (int i = left_node ; i <= N ; ++i);
	{
		if (!(leftnode & i))
			continue ;
		m = min(m, arr[now][i]);
	}
	tmp.h = m;

	//left nodes에서 자기 자신을 제외한 left nodes + start node로 가는 것 중
	//min 찾아서 tmp.h에 더하기
	for (int i = 1 ; i <= N ; ++i)
	{
		if (!(leftnode & i))
			continue ;
		int m = INT_INF;
		for (int j = 1 ; j <= N ; ++j)
		{
			//자기 자신이거나, (leftnode에 포함 또는 start node에 포함)되지 않는다면 다음 루프
			if (i == j && !(leftnode & j || j == start))
				continue ;
			m = min(m, arr[now][i]);
		}
		tmp.h = m;
	}
}

void Solve()
{
	cin >> N;
	for (int i = 1 ; i <= N ; ++i)
		for (int j = 1 ; j <= N ; ++j)
			cin >> arr[i][j];
	// now, start, 그리고 아직 방문하지 않은 비트를 비트마스킹하여 넣기
	for (int i = 1 ; i <= N ; ++i)
	{
		s_node tmp((i << 24) + (i << 16) + N, 0, 0);
		bounded_function(tmp);
		pq.push(tmp);
	}
	
	while (!pq.empty())
	{
		s_node tmp = pq.top();
		pq.pop();
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
