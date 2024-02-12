// https://www.acmicpc.net/problem/10951

#include <iostream>

using namespace std;

int	N;
int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b;
	while (!(cin >> a >> b).eof())
		cout << a + b << "\n";
	return (0);
}
