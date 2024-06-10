// https://www.acmicpc.net/problem/10971
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>
#include <bitset>
#define INT_INF 20000000

using namespace std;

int	N;
int arr[17][17];
unsigned int best = INT_INF;

// first int {5bit for cnt} {5bit for now node}
// {5 bit for start_node} {17 bit for left_nodes sequence}
// second int g
// third int h
struct s_node
{
	unsigned int info;
	unsigned int g;
	unsigned int h;

	s_node(unsigned int init_info, unsigned int init_g) : info(init_info), g(init_g)
	{
		h = 0;
	}
};

bool operator<(const s_node& a, const s_node& b)
{
	return (a.h + a.g) > (b.h + b.g);
}

priority_queue<s_node> pq;

//tmp node의 정보를 기반으로 h값 결정
void bounded_function(s_node& tmp)
{
	tmp.h = 0;
	//i에서 j로 가는데, i가 될 수 있는 것은 now node와 left nodes에 속한 노드들,
	//대신 now node는 start node로 갈 수 없음 ()
	unsigned int cnt = tmp.info >> 27;
	unsigned int now = (tmp.info << 5) >> 27;
	unsigned int start = (tmp.info << 10) >> 27;
	unsigned int left_node = (tmp.info << 15) >> 15;
//	cout << "cnt: " << cnt << "\n";
//	cout << "now: " << now << "\n";
//	cout << "start: " << start << "\n";
//	bitset<32> ln(left_node);
//	cout << "left_node: " << ln << "\n";
//	cout << "g: " << tmp.g << "\n";

	if (cnt == N - 1)
	{
		if (arr[now][start] != 0)
			tmp.h = arr[now][start];
		else
			tmp.h = INT_INF;
		return ;
	}

	int m = INT_INF;
	// now에서 갈 수 있는 것은 left nodes만. 그 중 min찾기
	for (int i = 1 ; i <= N ; ++i)
	{
//		cout << " * * test2 : " << bitset<16>(1 << (i - 1)) << "\n";
		if (!(left_node & (1 << (i - 1))) || arr[now][i] == 0)
			continue ;
		m = min(m, arr[now][i]);
	}
	tmp.h = m;

//	cout << " * * * mid h: " << tmp.h << "\n";
	//left nodes에서 자기 자신을 제외한 left nodes + start node로 가는 것 중
	//min 찾아서 tmp.h에 더하기
	for (int i = 1 ; i <= N ; ++i)
	{
		if (!(left_node & (1 << (i - 1))))
			continue ;
		int m = INT_INF;
		for (int j = 1 ; j <= N ; ++j)
		{
			//자기 자신이거나, leftnode 또는 start에 포함되지 않으면 다음루프
			if (i == j || !(left_node & (1 << (j - 1)) || j == start) || arr[i][j] == 0)
				continue ;
			m = min(m, arr[i][j]);
		}
		tmp.h += m;
	}
//	cout << " * * * total h: " << tmp.h << "\n";
//	cout << "\n";
}

void Solve()
{
	cin >> N;
	for (int i = 1 ; i <= N ; ++i)
		for (int j = 1 ; j <= N ; ++j)
			cin >> arr[i][j];

	// now, start, 그리고 아직 방문하지 않은 비트를 비트마스킹하여 넣기
	int init_left_node = 0b11111111111111111 >> (17 - N);
	for (int i = 1 ; i <= N ; ++i)
	{
		s_node new_node((i << 22) + (i << 17) + (init_left_node ^ (1 << (i - 1))), 0);
		bounded_function(new_node);
		bitset<32> infos(new_node.info);
		pq.push(new_node);
	}
	
	while (!pq.empty())
	{
		s_node tmp = pq.top();
		pq.pop();
		// best가 남은 노드들의 g + h 보다 작다면, 더 이상 계산할 필요가 없음.
		if (best <= tmp.g + tmp.h)
			break ;
		unsigned int cnt = tmp.info >> 27;
		unsigned int now = (tmp.info << 5) >> 27;
		unsigned int start = (tmp.info << 10) >> 27;
		unsigned int left_node = (tmp.info << 15) >> 15;
		if (cnt == N - 1)
		{
			best = min(best, tmp.g + tmp.h);
			continue ;
		}
		// 남은 노드들로 branching. 어차피 left_node에는 start와 now가 빠진 상태로 넣어줄 거라 자신은 체크할 필요 없음
		// 순차적으로 돌면서 left_node인지 확인, left_node면 now 에서 left_node로 이동, g update
		++cnt;
		for (int i = 1 ; i <= N ; ++i)
		{
			if (!(left_node & (1 << (i - 1))) || arr[now][i] == 0)
				continue ;
			unsigned int new_left_node = left_node ^ (1 << (i - 1));
			unsigned int new_info = (cnt << 27) + (i << 22) + (start << 17) + new_left_node;
			s_node new_node(new_info, tmp.g + arr[now][i]);
			bounded_function(new_node);
			pq.push(new_node);
		}
	}
	cout << best << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
