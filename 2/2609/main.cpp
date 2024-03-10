// https://www.acmicpc.net/problem/2609

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int	A;
int B;
int	most;
int least;

void Input()
{
	cin >> A;
	cin >> B;
}

//void Solve()
//{
//	most = min(A, B);
//	least = max(A, B);
//	while (!(A % most == 0 && B % most == 0))
//		--most;
//	while (!(least % A == 0 && least % B == 0))
//		++least;
//}

int GCD(int a, int b)
{
	int tmp;

	while (b)
	{
		tmp = b;
		b = a % b;
		a = tmp;
	}
	return (a);
}

int LCM(int a, int b, int gcd){
	return (a * b) / gcd;
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
//	Solve();
	most = GCD(A, B);
	cout << most << "\n";
	cout << LCM(A, B, most) << "\n";
	return (0);
}
