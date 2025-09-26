// https://www.acmicpc.net/problem/26068
// github/Tastypotato245/boj

#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	int n; cin >> n;

	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		string giftycon; cin >> giftycon;
		int dayLeft = stoi(giftycon.substr(2));
		if (dayLeft <= 90)
			ans++;
	}

	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
