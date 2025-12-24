// https://www.acmicpc.net/problem/34945
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	cin >> N;

	if (N + 2 >= 8)
		cout << "Success!";
	else
		cout << "Oh My God!";
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return 0;
}
