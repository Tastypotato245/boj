// https://www.acmicpc.net/problem/14003
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

int	N, ans = 0;
int arr[1000001];
int seq[1000001];

void Solve()
{
	cin >> N;
	for (int i = 1 ; i <= N ; ++i)
		cin >> arr[i];

	vector<int> v;
	v.push_back(arr[1]);

	fill(seq, seq + 1000001, 1);
	ans++;
	for (int i = 2 ; i <= N ; ++i)
	{
		if (arr[i] > v[ans - 1])
		{
			v.push_back(arr[i]);
			seq[i] = ans + 1;
			ans++;
		}
		else
		{
			int idx = lower_bound(v.begin(), v.end(), arr[i]) - v.begin();
			v[idx] = arr[i];
			seq[i] = idx + 1;
		}
	}

	stack<int> s;

	int cnt = ans;
	for (int i = N ; i >= 1 ; --i)
	{
		if (cnt == seq[i])
		{
			s.push(arr[i]);
			--cnt;
		}
	}

	cout << ans << "\n";
	while (!s.empty())
	{
		cout << s.top() << " ";
		s.pop();
	}
	cout << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
