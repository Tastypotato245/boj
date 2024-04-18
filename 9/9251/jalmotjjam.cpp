// https://www.acmicpc.net/problem/9251
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool arr[1000][1000];
int y = 0, x = 0, val = 0;
int lenA;
int lenB;

void up(int i, int j, bool *flag)
{
	if (*flag == false && i < lenA && j < lenB && arr[i][j])
	{
		cout << "before : y : " << y << "\tx : " << x << "\n";
		y = i + 1;
		x = j + 1;
		cout << "after : y : " << y << "\tx : " << x << "\n";
		++val;
		cout << "val : " << val << "\n";
		*flag = true;
	}
}

void Solve()
{
	string a, b;
	cin >> a >> b;
	lenA = a.size();
	lenB = b.size();
	int maxPos = max(lenA, lenB);
	for (int i = 0 ; i < lenB; ++i)
		for (int j = 0 ; j < lenA ; ++j)
			if (b[i] == a[j])
				arr[i][j] = true;


	for (int i = 0 ; i < lenB ; ++i)
	{
		for (int j = 0 ; j < lenA ; ++j)
			cout << arr[i][j] << " ";
		cout << "\n";
	}

	while (y < lenA && x < lenB)
	{
		bool flag = false;
		for (int i = 0 ; i < maxPos && !flag ; ++i)
		{
			for (int j = 0 ; j < i && !flag ; ++j)
			{
				up(y + i, x + j, &flag);
				up(y + j, x + i, &flag);
			}
			up(y + i, x + i, &flag);
		}
	}
	cout << val << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
