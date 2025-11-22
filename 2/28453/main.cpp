// https://www.acmicpc.net/problem/28453
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
    int N, inp;
    cin >> N;

    for(int i=0; i<N; i++)
	{
        cin >> inp;
        if(inp == 300)
            cout << "1 ";
        else if(inp >= 275)
            cout << "2 ";
        else if(inp >= 250)
            cout << "3 ";
        else
            cout << "4 ";
    }
    cout << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
