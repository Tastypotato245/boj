//rbt2775@gmail.com
//round1 - p3

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

long long arr[300001];
//vit over	first part			 second part          third part
//0   000 	00000000000000000000 00000000000000000000 00000000000000000000
long long super_node_0;
long long super_node_1;
void store(long long src, long long dst)
{
//	cout << "src: " << src << ", dst: " << dst << endl;
	//src
	if (arr[src] == 0)			// first part
		arr[src] |= (dst << 40);
	else if ((arr[src] << 24) >> 44 == 0)	// second part
		arr[src] |= (dst << 20);
	else									// third part
	{
		arr[src] |= dst;
		if (super_node_0 == 0)
			super_node_0 = src;
		else
			super_node_1 = src;
//		cout << "in store - sn0: " << super_node_0 << endl;
//		cout << "in store - sn1: " << super_node_1 << endl;
	}

	//dst
	if (arr[dst] == 0)			// first part
		arr[dst] |= (src << 40);
	else if ((arr[dst] << 24) >> 44 == 0)	// second part
		arr[dst] |= (src << 20);
	else									// third part
	{
		arr[dst] |= src;
		if (super_node_0 == 0)
			super_node_0 = dst;
		else
			super_node_1 = dst;
//		cout << "in store - sn0: " << super_node_0 << endl;
//		cout << "in store - sn1: " << super_node_1 << endl;
	}
//	cout << "arr[src]: " << arr[src] << ", arr[dst]: " << arr[dst] << endl;
}

long long get_next(long long travel)
{
	// 방문하지 않은 방향으로 진행
	if (arr[(arr[travel] << 4) >> 44] >> 63 == 0)
	{
		arr[(arr[travel] << 4) >> 44] |= (1UL << 63);
		return (arr[travel] << 4) >> 44;
	}
	else
	{
		arr[(arr[travel] << 24) >> 44] |= (1UL << 63);
		return (arr[travel] << 24) >> 44;
	}
	return -1;
}

void Solve()
{
	int T, test_case;

	cin >> T;
	for(test_case = 0; test_case < T; test_case++)
	{
		int N; //node cnt
		long long Answer = 0;
		fill(arr, arr + N + 1, 0);

		super_node_0 = 0;
		super_node_1 = 0;
		cin >> N;
		for (int i = 0 ; i < N + 1 ; ++i)
		{
			long long src, dst;
			cin >> src >> dst;
			store(src, dst);
		}

		long long travel = 0;
//		cout << "	1: " << ((arr[super_node_0] << 4) >> 44) << endl;
//		cout << "	2: " << ((arr[super_node_0] << 24) >> 44) << endl;
//		cout << "	3: " << ((arr[super_node_0] << 44) >> 44) << endl;
		if ((arr[super_node_0] << 4) >> 44 != super_node_1)
			travel = (arr[super_node_0] << 4) >> 44;
		else if ((arr[super_node_0] << 24) >> 44 != super_node_1)
			travel = (arr[super_node_0] << 24) >> 44;
		else
			travel = (arr[super_node_0] << 44) >> 44;
//		cout << "bb travel: " << travel << endl;
		arr[super_node_0] |= (1LU << 63); //vis
		arr[travel] |= (1LU << 63);
		long long cnt = 1;
		
		for (int i = 0 ; i < N ; ++i) //maximum N
		{
			++cnt;
//			cout << "b travel: " << travel << endl;
			travel = get_next(travel);
//			cout << "a travel: " << travel << endl;
			if (travel == super_node_1)
				break ;
		}
		Answer = ((cnt - 1) * cnt / 2) + ((N - 1 - cnt) * (N - cnt) / 2);
//		cout << "sn0: " << super_node_0 << endl;
//		cout << "sn1: " << super_node_1 << endl;
//		cout << "cnt: " << cnt << endl;
		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
