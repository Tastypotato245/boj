// https://www.acmicpc.net/problem/30501
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string name;
		cin >> name;

		// 이름에 'S'가 포함되어 있으면 출력
		if (name.find('S') != string::npos)
		{
			cout << name << '\n';
			return;
		}
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
