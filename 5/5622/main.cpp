// https://www.acmicpc.net/problem/5622
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s;
int arr[] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
int ans;

void Solve()
{
	cin >> s;
	for (int i = 0 ; i < s.size() ; ++i)
		ans += arr[s[i] - 'A'];
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
