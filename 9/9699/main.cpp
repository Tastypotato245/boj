// https://www.acmicpc.net/problem/9699
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	N;

void Solve()
{
	cin >> N;

	for (int i = 0 ; i < N ; ++i)
	{
		vector<int> v(5);
		for (int j = 0 ; j < 5 ; ++j)
			cin >> v[j];
		cout << "Case #" << i + 1 << ": " << *max_element(v.begin(), v.end()) << "\n";
	}

}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
