// https://www.acmicpc.net/problem/7662
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int	T;

void Solve()
{
	cin >> T;
	for (int i = 0 ; i < T ; ++i)
	{
		int N;
		multiset<int> set;
		cin >> N;
		for (int j = 0 ; j < N ; ++j)
		{
			char op;
			int tmp;
			cin >> op >> tmp;
			if (op == 'I')
				set.insert(tmp);
			else
			{
				if (!set.empty())
				{
					if (tmp == 1)
						set.erase(--set.end());
					else
						set.erase(set.begin());
				}
			}
		}
		if (set.empty())
			cout << "EMPTY\n";
		else
		{
			cout << *(--set.end()) << " " << *set.begin() << "\n";
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}

