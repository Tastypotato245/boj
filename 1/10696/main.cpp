// https://www.acmicpc.net/problem/10696
// github/Tastypotato245/boj

#include <iostream>
#include <string>

using namespace std;

void Solve()
{
	int T;
	cin >> T;

	for (int t = 1; t <= T; t++)
	{
		string num;
		int divisor;
		cin >> num >> divisor;

		long long remainder = 0;
		for (char c : num)
		{
			int digit = c - '0';
			remainder = (remainder * 10 + digit) % divisor;
		}

		cout << "Case " << t << ": " << remainder << "\n";
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
