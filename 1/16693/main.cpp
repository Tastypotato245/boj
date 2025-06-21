// https://www.acmicpc.net/problem/16693
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

double	A1, P1, R1, P2;

void Solve()
{
	cin >> A1 >> P1 >> R1 >> P2;

	double wholePizzaValue = R1 * R1 * 3.14159265359 / P2;
	double slicePizzaValue = A1 / P1;


    if(wholePizzaValue > slicePizzaValue)
		cout << "Whole pizza";
    else
		cout << "Slice of pizza";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
