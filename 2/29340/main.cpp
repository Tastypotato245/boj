// https://www.acmicpc.net/problem/29340
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int N;

void Solve()
{
    string a, b;
    cin >> a >> b;

    int len = a.size();
    string result = "";

    for (int i = 0; i < len; i++) {
        char c = max(a[i], b[i]);
        result += c;
    }

    cout << result << "\n";
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    Solve();
    return 0;
}
