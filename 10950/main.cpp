// https://www.acmicpc.net/problem/10950

#include <iostream>
#include <algorithm>

using namespace std;

int	main(void)
{
	int	T;
	int a, b;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	for (int i = 0; i < T; ++i)
	{
		cin >> a >> b;
		cout << a + b << "\n";
	}
	return (0);
}
