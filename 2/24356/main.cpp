// https://www.acmicpc.net/problem/24356
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int t1, m1, t2, m2, diff;

void Solve()
{
    cin >> t1 >> m1 >> t2 >> m2;

    m1 += t1 * 60;
	m2 += t2 * 60;
    if (m1 > m2)
		m2 += 24 * 60;
    diff = m2 - m1;

    cout << diff << ' ' << diff / 30;

}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
