// https://www.acmicpc.net/problem/25893
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        cout << a << " " << b << " " << c << endl;

        int count = 0;
        if (a >= 10) count++;
        if (b >= 10) count++;
        if (c >= 10) count++;

        if (count == 0) cout << "zilch" << "\n";
        else if (count == 1) cout << "double" << "\n";
        else if (count == 2) cout << "double-double" << "\n";
        else cout << "triple-double" << "\n";

        cout << "\n";
    }
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
