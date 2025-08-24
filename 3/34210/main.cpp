// https://www.acmicpc.net/problem/34210
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N, Q;
vector<int> A, B;

void initialize(vector<int> a, vector<int> b)
{
    A = a;
    B = b;
}

int answer_question(int i, int j)
{
    return A[i] + B[j];
}

void Solve()
{
    cin >> N;
    A.resize(N);
    B.resize(N);

    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];

    initialize(A, B);

    cin >> Q;
    while (Q--)
    {
        int i, j;
        cin >> i >> j;
        cout << answer_question(i, j) << "\n";
    }
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
