//rbt2775@gmail.com
//round1 square

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int instant_arr[50001];
void Solve()
{
	int T, test_case;

	cin >> T;
	for(test_case = 0; test_case < T; test_case++)
	{
		cout << "Case #" << test_case+1 << endl;
		long long Answer = 0;

		int N;
		cin >> N;

		int arr[N + 1];
		for (int i = 1 ; i <= N ; ++i)
			cin >> arr[i];

		int q;
		cin >> q;
		int l, r;
		for (int i = 0 ; i < q ; ++i)
		{
			cin >> l >> r;
			int len = r - l + 1;
			fill(instant_arr, instant_arr + 50001, 0);
			long long cnt = 0;
			for (int j = 1; j <= len ; ++j)
			{
				if (arr[l + j - 1] == 1)
					continue ;
				long long val = arr[l + j - 1];
				instant_arr[val]++;
				if (instant_arr[val] >= val)
				{
					instant_arr[val] -= val;
					if (val <= 223)
						instant_arr[val * val]++;
					cnt++;
				}
			}
			for (int j = 2; j <= 223 ; ++j)
			{
				if (instant_arr[j] >= j)
				{
					instant_arr[j] -= j;
					if (j <= 223)
						instant_arr[j * j]++;
					cnt++;
				}
			}
			Answer = cnt;
			cout << Answer << endl;
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
