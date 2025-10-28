// https://www.acmicpc.net/problem/27240
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
    long long n, a, b;
    cin >> n >> a >> b;

    long long s, t;
    cin >> s >> t;

    if (s > a && s < b && t > a && t < b) {
        cout << "City\n";
    }
    else if ((s <= a && t <= a) || (s >= b && t >= b)) {
        cout << "Outside\n";
    }
    else {
        cout << "Full\n";
    }
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
