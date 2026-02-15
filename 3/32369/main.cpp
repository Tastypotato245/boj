// https://www.acmicpc.net/problem/32369
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
    int A, B;
    cin >> N >> A >> B;

    int praise = 1;
    int blame = 1;

    for (int i = 0; i < N; i++)
    {
        // 1, 2 단계
        praise += A;
        blame += B;

        // 3 단계
        if (blame > praise)
        {
            swap(praise, blame);
        }
        else if (blame == praise)
        {
            blame -= 1;
        }
    }

    cout << praise << " " << blame;
}

int main(void)
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    Solve();
    return (0);
}
