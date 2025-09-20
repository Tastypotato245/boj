// https://www.acmicpc.net/problem/34454
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
    int N, C, P;
    cin >> N >> C >> P;

    int capacity = C * P;
    if (N <= capacity) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
