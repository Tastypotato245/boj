// https://www.acmicpc.net/problem/19602
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int s, m, l, score;

void Solve()
{
    cin >> s >> m >> l;

    score = 1 * s + 2 * m + 3 * l;
    if(score >= 10)
		cout << "happy";
    else
		cout << "sad";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
