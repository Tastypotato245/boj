// https://www.acmicpc.net/problem/31775
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;

void Solve()
{
    vector<char> v(3);
    string s;

    for (int i = 0; i < 3; i++)
    {
        cin >> s;
        v[i] = s[0];
    }

    sort(v.begin(), v.end());

    if (v[0] == 'k' && v[1] == 'l' && v[2] == 'p')
        cout << "GLOBAL";
    else
        cout << "PONIX";
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    Solve();
    return 0;
}
