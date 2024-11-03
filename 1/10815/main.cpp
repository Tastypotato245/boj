// https://www.acmicpc.net/problem/10815
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, M;
int card[500000];
int target[500000];

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
		cin >> card[i];
	sort(card, card + N);
	cin >> M;
	for (int i = 0 ; i < M ; ++i)
	{
		cin >> target[i];
		int idx = lower_bound(card, card + N, target[i]) - card;
		if (idx < N && card[idx] == target[i])
			cout << "1 ";
		else
			cout << "0 ";
	}
	cout << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
