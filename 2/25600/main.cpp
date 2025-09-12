// https://www.acmicpc.net/problem/25600
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, a, d, g;
vector<int> scores;

void Solve()
{
    cin >> n;
    scores.resize(n);
    for (int i = 0; i < n; i++)
	{
        cin >> a >> d >> g;
        scores[i] = a * (d + g);
        if (a == d + g)
		{
            scores[i] *= 2;
        }
    }
    cout << *max_element(scores.begin(), scores.end());
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
