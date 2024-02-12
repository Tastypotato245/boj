// https://www.acmicpc.net/problem/

#include <iostream>
#include <algorithm>

using namespace std;

int	A;
int B;
int C;
int arr[10];

void Input()
{
	cin >> A;
	cin >> B;
	cin >> C;
}

void Output()
{
	for (int i = 0; i < 10; i++)
		cout << arr[i] << "\n";
}

void Solve()
{
	A = A * B * C ;
	while (A)
	{
		arr[A % 10]++;
		A = A / 10;
	}
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
