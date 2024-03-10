// https://www.acmicpc.net/problem/2884

#include <iostream>
#include <algorithm>

using namespace std;

int	H;
int M;

void Input()
{
	cin >> H;
	cin >> M;
}

void Output()
{
	cout << H << " " << M << "\n";
}

void Solve()
{
	if (M - 45 < 0)
	{
		M = M + 15;
		if (H - 1 < 0)
			H = 23;
		else
			H -= 1;
	}
	else
		M = M - 45;
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Solve();
	Output();
	return (0);
}
