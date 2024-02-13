// https://www.acmicpc.net/problem/2869

#include <iostream>
#include <algorithm>

using namespace std;

int	A;
int	B;
int	V;
int	cnt;

void Input()
{
	cin >> A;
	cin >> B;
	cin >> V;
}

void Solve()
{
	int tmp = A - B;
	V -= A;
	cnt = V / tmp;
	if (V % tmp != 0)
		++cnt;
	++cnt;
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Solve();
	cout << cnt << "\n";
	return (0);
}
