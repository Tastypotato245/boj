// https://www.acmicpc.net/problem/17903
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int n, m, query[21][21];

void Solve()
{
	    cin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> query[i][j];
    if(n >= 8) cout << "satisfactory";
    else cout << "unsatisfactory";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
