// https://www.acmicpc.net/problem/1427
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

char num[10];

void Solve()
{
	int i;
	for (i = 0 ; cin >> num[i] ; ++i);
	int size = i;
	sort(num, num + size, greater<>());
	i = 0;
	while (i < size)
		cout << num[i++];
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
