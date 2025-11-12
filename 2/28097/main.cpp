// https://www.acmicpc.net/problem/28097
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
    int _N, _Temp, _Res = 0;
    cin >> _N;
    _Res += (_N - 1) * 8;

    for (int i = 0; i < _N; i++) {
        cin >> _Temp;
        _Res += _Temp;
    }
    cout << _Res / 24 << " " << _Res % 24;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
