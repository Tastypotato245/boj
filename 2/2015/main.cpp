// https://www.acmicpc.net/problem/2015
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int	N, K, num;
long long arr[200001];
long long answer;

void Solve()
{
	cin >> N >> K;

	map<int, long long> m;
	m[0] = 1;

	for (int i = 1; i <= N ; ++i)
	{
		cin >> num;
		// 누적합 배열 만들기
		arr[i] = arr[i - 1] + num;
		// 만약 arr[i] - K 이 map에 저장되어있다면 그 만큼의 값을  answer에 더해줌
		answer += m[arr[i] - K];
		// arr[i]을 key로서 map에 저장함
		m[arr[i]]++;
	}
	cout << answer << "\n";
	/*
	   1 ~ N까지 순회하며 누적합을 구한다.
	   현재 누적합에서 K를 만들어 내는 수 를 key로 가지는 map의 요소가 존재한다면 부분합이 K인 부분배열이 있다는 의미이므로 cnt += value
	   현재 누적합을 key로 가지는 map이 존재하면 value에 +1
	   존재하지 않는다면 map에 추가
	 */
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
