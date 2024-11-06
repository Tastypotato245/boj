// https://www.acmicpc.net/problem/2568
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int	N;
vector<pair<int, int> > v;
int ans = 0;
int seq[100000];
deque<int> dq;

bool isNotCut(int sec)
{
	for (int i = 0 ; i < dq.size() ; ++i)
		if (sec == dq[i])
			return (true);
	return (false);
}

void Solve()
{
	cin >> N;
	v.resize(N);
	for (int i = 0 ; i < N ; ++i)
		cin >> v[i].first >> v[i].second ;
	sort(v.begin(), v.end());

	vector<int> tv;
	tv.push_back(v[0].second);

	fill(seq, seq + N, -1);
	++ans;
	seq[0] = 1;
	for (int i = 1 ; i < N ; ++i)
	{
		if (v[i].second > tv[ans - 1])
		{
			tv.push_back(v[i].second);
			seq[i] = ++ans;
		}
		else
		{
			int idx = lower_bound(tv.begin(), tv.end(), v[i].second) - tv.begin();
			tv[idx] = v[i].second;
			seq[i] = idx + 1;
		}
	}

	int cnt = ans;
	for (int i = N - 1 ; i >= 0 ; --i)
	{
		if (cnt == seq[i])
		{
			dq.push_front(v[i].second);
			--cnt;
		}
	}

	cout << N - ans << "\n";
//	cout << "vector: \n";
//	for (int i = 0 ; i < N ; ++i)
//		cout << v[i].second << " ";
//	cout << "\nseq: \n";
//	for (int i = 0 ; i < N ; ++i)
//		cout << seq[i] << " ";
//	cout << "\ndq: \n";
//	for (int i = 0 ; i < dq.size() ; ++i)
//		cout << dq[i] << " ";
//	cout << "\n\n";
	for (int i = 0 ; i < N ; ++i)
		if (!isNotCut(v[i].second))
			cout << v[i].first << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
