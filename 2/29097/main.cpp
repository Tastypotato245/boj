// https://www.acmicpc.net/problem/29097
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

void Solve()
{
    int n, m, k, a, b, c;
    cin >> n >> m >> k >> a >> b >> c;

    int J = n * a;
    int R = m * b;
    int S = k * c;

    int maxi = max({J, R, S});

    vector<string> ans;
    if (J == maxi) ans.push_back("Joffrey");
    if (R == maxi) ans.push_back("Robb");
    if (S == maxi) ans.push_back("Stannis");

    // 이미 이름들이 사전순이라 정렬 필요 없음: Joffrey < Robb < Stannis
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
        if (i + 1 < ans.size()) cout << " ";
    }
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    Solve();
    return 0;
}
