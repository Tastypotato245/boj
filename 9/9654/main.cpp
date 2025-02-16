// https://www.acmicpc.net/problem/9654
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
	cout << "SHIP NAME      CLASS          DEPLOYMENT IN SERVICE\n";
	cout << "N2 Bomber      Heavy Fighter  Limited    21        \n";
	cout << "J-Type 327     Light Combat   Unlimited  1         \n";
	cout << "NX Cruiser     Medium Fighter Limited    18        \n";
	cout << "N1 Starfighter Medium Fighter Unlimited  25        \n";
	cout << "Royal Cruiser  Light Combat   Limited    4         \n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
