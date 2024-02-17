// https://www.acmicpc.net/problem/11399
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int ans;

void Output()
{
	cout << ans << "\n";
}

void Solve()
{
	cin >> N;
	int arr[N];
	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];
	sort(arr, arr + N);
	for (int i = 1 ; i < N ; ++i)
		arr[i]= arr[i - 1] + arr[i];
	for (int i = 0 ; i < N ; ++i)
		ans += arr[i];	
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve(); Output();
	return (0);
}
