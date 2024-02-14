// https://www.acmicpc.net/problem/1003

#include <iostream>
#include <algorithm>

using namespace std;

int T;
int fibo[42];

void MakeFibo()
{
	fibo[0] = 1;
	fibo[1] = 0;
	fibo[2] = 1;
	for (int i = 3 ; i < 42 ; ++i)
		fibo[i] = fibo[i - 1] + fibo[i - 2];
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tmp;
	MakeFibo();
	cin >> T;
	for (int i = 0; i < T ; ++i)
	{
		cin >> tmp;
		cout << fibo[tmp] << " " << fibo[tmp + 1] << "\n";
	}
	return (0);
}
