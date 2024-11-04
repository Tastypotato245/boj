// https://www.acmicpc.net/problem/30802
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int	N, T, P;
int arr[6];

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < 6 ; ++i)
		cin >> arr[i];
	cin >> T >> P;

	int t_num = 0;
	for (int i = 0 ; i < 6 ; ++i)
		t_num += ceil((double)arr[i] / T);
	cout << t_num << "\n";
	cout << N / P << " " << N % P << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
