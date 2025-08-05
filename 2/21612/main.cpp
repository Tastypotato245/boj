// https://www.acmicpc.net/problem/21612
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int b, p;
int getSeaLevel(int p){
    int diff = p - 100;
    if(diff < 0)
        return 1;
    if(diff == 0)
        return 0;
    return
        -1;
}

void Solve()
{
    cin >> b;
    p = 5 * b - 400;
    cout << p << '\n' << getSeaLevel(p);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
