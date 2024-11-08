// https://www.acmicpc.net/problem/2166
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int	N;

double cal(vector<double> x, vector<double> y)
{
	double answer = 0.0;

	for (int i = 2 ; i < N ; i++)
	{
		answer += x[0] * y[i - 1] + x[i - 1] * y[i] + x[i] * y[0];
		answer -= x[i - 1] * y[0] + x[i] * y[i - 1] + x[0] * y[i];
	}
	return (answer);
}

void Solve()
{
	cin >> N;
	vector<double> x(N, 0);
	vector<double> y(N, 0);

	for (int i = 0 ; i < N ; ++i)
	{
		cin >> x[i];
		cin >> y[i];
	}

	double answer = cal(x, y) / 2;

	cout << fixed;
	cout.precision(1);
	cout << abs(answer) << endl;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
