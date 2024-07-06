//rbt2775@gmail.com

#include <iostream>
#include <algorithm>

using namespace std;


void Solve()
{
	int T, test_case;

	cin >> T;
	for(test_case = 0; test_case < T; test_case++)
	{
		int N;
		long long Answer = 0;
		cin >> N;
		int cnt = N / 4;
		int arr[N];
		for (int i = 0 ; i < N ; ++i)
			cin >> arr[i];
		sort(arr, arr + N);
		for (int i = 0 ; i < cnt ; ++i)
			Answer += arr[cnt * 3 + i] - arr[i];
		Answer *= 2;
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
