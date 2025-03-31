// https://www.acmicpc.net/problem/2628
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int	A, B, N;
int sero_max = 0, garo_max = 0;

void Solve()
{
	cin >> A >> B >> N;

	vector<int> v_garo;
	vector<int> v_sero;
	for (int i = 0 ; i < N ; ++i)
	{
		int sero, num;

		cin >> sero >> num;
		if (sero)
			v_sero.push_back(num);
		else
			v_garo.push_back(num);

	}
	v_sero.push_back(0);
	v_garo.push_back(0);
	v_sero.push_back(A);
	v_garo.push_back(B);
	sort(v_sero.begin(), v_sero.end());
	sort(v_garo.begin(), v_garo.end());


	for (int j = 1 ; j < v_sero.size() ; ++j)
		sero_max = max(v_sero[j] - v_sero[j - 1], sero_max);
	for (int j = 1 ; j < v_garo.size() ; ++j)
		garo_max = max(v_garo[j] - v_garo[j - 1], garo_max);
	cout << sero_max * garo_max;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
