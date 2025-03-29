// https://www.acmicpc.net/problem/5543
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int	sang_duck, jung_duck, ha_duck;
int cola, soda;

void Solve()
{
	cin >> sang_duck >> jung_duck >> ha_duck;
	cin >> cola >> soda;
	cout << min(min(sang_duck, jung_duck), ha_duck) + min(cola, soda) - 50;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
