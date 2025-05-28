// https://www.acmicpc.net/problem/1002
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int T;
int	x_1, y_1, r_1, x_2, y_2, r_2;

void Solve()
{
	cin >> T;
	for (int i = 0 ; i < T ; ++i)
	{
		cin >> x_1 >> y_1 >> r_1 >> x_2 >> y_2 >> r_2;

		if (x_1 == x_2 && y_1 == y_2)
		{
			if (r_1 == r_2)
			{
				// 위치, 거리도 같고, 심지어 거리가 0이 아니면 r_1을 반지름으로 하는 원 위 어느 곳에서에 류재명이 존재할 수 있다. 따라서 무한대
				if (r_1 != 0)
					cout << "-1";
				// 위치, 거리 같은데 거리가 0이면 조규현과 백승환, 류재명이 같은 위치에 있다.
				else
					cout << "1";
			}
			// 위치 같지만, 거리가 다르면 애초에 류재명이 있을 수 있는 곳이 없다.
			else
				cout << "0";
		}
		else
		{
			int pow_distance_between_two = (x_2 - x_1) * (x_2 - x_1) + (y_2 - y_1) * (y_2 - y_1);
			int sum_r = r_1 + r_2;
			int diff_r = abs(r_1 - r_2);
			int pow_sum_r = sum_r * sum_r;
			int pow_diff_r = diff_r * diff_r;

			// 터렛 사이 거리와 계산한 거리가 같으면 두 원의 접점이 1개. 한 곳에서 만남
			// 내접, 외접 둘 다 포함
			if (pow_distance_between_two == pow_sum_r || pow_distance_between_two == pow_diff_r)
				cout << "1";
			// 터렛 사이 거리보다 계산한 거리가 크면 계산한 거리가 일직선이 아니니, 접점이 2개라는 뜻, 원이 겹침
			else if (pow_diff_r < pow_distance_between_two && pow_distance_between_two < pow_sum_r)
				cout << "2";
			// 터렛 사이 거리보다 계산한 거리가 짧으면 접한 곳이 없음
			else
				cout << "0";
		}
		cout << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
