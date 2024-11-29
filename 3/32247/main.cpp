#include <iostream>

using namespace std;

// type and h
int pos[200001][2];

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, M;
	cin >> N >> M;


	for (int i = 0 ; i < M ; ++i)
	{
		int type, x, h;
		cin >> type >> x >> h;
		pos[x][0] = type + 1;
		pos[x][1] = h;
	}


	int fly_y = 0;
	for (int i = 1 ; i <= N ; ++i)
	{
		if (pos[i][0] == 2)
		{
			fly_y--;
			if (pos[i][1] <= fly_y)
			{
				cout << "adios\n";
				return (0);
			}
		}
		else if (pos[i][0] == 1 && pos[i][1] + 1 >= fly_y)
			fly_y = pos[i][1] + 1;
		else
			fly_y--;
	}
	if (fly_y > 0)
		cout << "adios\n";
	else
		cout << "stay\n";
	return (0);
}
