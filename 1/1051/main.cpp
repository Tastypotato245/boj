#include <iostream>
#include <algorithm>

using namespace std;
char board[51][51];

int main(void)
{
	int N, M;

	cin >> N >> M;
	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < M ; ++j)
			cin >> board[i][j];

	int ans = 0;
	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < M ; ++j)
		{
			for (int k = 0 ; k + i < N && k + j < M ; ++k)
			{
				if (board[i][j] == board[i + k][j]
						&& board[i][j] == board[i][j + k]
						&& board[i][j] == board[i + k][j + k])
				{
					ans = max(ans, k + 1);
				}
			}
		}
	cout << ans * ans << "\n";
	return (0);
}
