// https://www.acmicpc.net/problem/25858
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void Solve()
{
    int n, d;
    cin >> n >> d;
    
    vector<int> problems(n);
    int totalProblems = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> problems[i];
        totalProblems += problems[i];
    }
    
    int rewardPerProblem = d / totalProblems;
    
    for (int i = 0; i < n; i++) {
        cout << problems[i] * rewardPerProblem << endl;
    }
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
