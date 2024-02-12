// https://www.acmicpc.net/problem/10809

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s;
int arr[26];

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> s;
	for (int i = 0; i < 26; ++i) arr[i] = -1;
	for (int i = 0; i < s.length(); ++i)
		if (arr[s[i] - 'a'] == -1)
			arr[s[i] - 'a'] = i;
	for (int i = 0; i < 26; ++i) cout << arr[i] <<" ";
	return (0);
}
