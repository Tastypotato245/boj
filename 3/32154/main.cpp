// https://www.acmicpc.net/problem/32154
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

string board[10][2] = {{"11", "A B C D E F G H J L M"},
					   {"9", "A C E F G H I L M"},
					   {"9", "A C E F G H I L M"},
					   {"9", "A B C E F G H L M"},
					   {"8", "A C E F G H L M"},
					   {"8", "A C E F G H L M"},
					   {"8", "A C E F G H L M"},
					   {"8", "A C E F G H L M"},
					   {"8", "A C E F G H L M"},
					   {"8", "A B C F G H L M"}};

void Solve()
{
	cin >> N;
	cout << board[N - 1][0] << "\n" << board[N - 1][1];
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
