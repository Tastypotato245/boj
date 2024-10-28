// https://www.acmicpc.net/problem/12738
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	N, ans;
int arr[1000001];

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];
	vector<int> v;
	
	v.push_back(arr[0]);
	ans++;
	for (int i = 1 ; i < N ; ++i)
	{
		if (arr[i] > v[ans - 1]) // 맨 뒤보다 더 크면 
		{
			v.push_back(arr[i]); // 삽입하고 답 증가
			ans++;
		}
		else // 작거나 같으면 arr[i] 보다 같거나 큰 숫자가 처음 등장하는 위치의 원소를 대체함
		{
			v[lower_bound(v.begin(), v.end(), arr[i]) - v.begin()] = arr[i];
		}
	}
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
