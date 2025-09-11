// https://www.acmicpc.net/problem/24751
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

double optionOne;

void Solve()
{
	cin >> optionOne;
	printf("%.10f\n%.10f", 100 / optionOne, 100 / (100 - optionOne));

}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
