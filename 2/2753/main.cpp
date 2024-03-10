// https://www.acmicpc.net/problem/2753

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Input()
{
	cin >> N;
}

void Output()
{
	if (N % 4 == 0 && (N % 100 != 0 || N % 400 == 0))
		cout << "1\n";
	else
		cout << "0\n";
}

void Solve()
{
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
