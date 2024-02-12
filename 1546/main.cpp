// https://www.acmicpc.net/problem/1546

#include <iostream>
#include <algorithm>

using namespace std;

int	main(void)
{
	int		n;
	double	tmp;
	double	m = 0;
	double	avg;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> tmp;
		m = max(m, tmp);
		avg += tmp;
	}
	avg = avg / m * 100 / n;
	cout << avg << "\n";
	return (0);
}
