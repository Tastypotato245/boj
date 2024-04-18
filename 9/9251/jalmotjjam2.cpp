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

void up(int i, int j)
{
	cout << "before : y : " << y << "\tx : " << x << "\n";
	y = i;
	x = j;
	cout << "after : y : " << y << "\tx : " << x << "\n";
	++val;
	cout << "val : " << val << "\n";
}

void Solve()
{
	string a, b;
	cin >> a >> b;
	lenA = a.size();
	lenB = b.size();
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
		cout << "(" << y << "," << x << ")" << ": " << val << "\n";
		int leftY = 0, leftX = 0;
		bool findL = false;
		for (int i = 0 ; !findL && i < lenA ; ++i)
			for (int j = 0 ; j <= i ; ++j)
				if (i < lenA && j < lenB && arr[y + i][x + j])
				{
					leftY = y + i + 1;
					leftX = x + j + 1;
					findL = true;
					break ;
				}

		int rightY = 0, rightX = 0;
		bool findR = false;
		for (int j = 0 ; !findR && j < lenB ; ++j)
			for (int i = 0 ; i < j ; ++i)
				if (i < lenA && j < lenB && arr[y + i][x + j])
				{
					rightY = y + i + 1;
					rightX = x + j + 1;
					findR = true;
					break ;
				}
		if (findL == false && findR == false)
			break ;
		else if (findL == true && findR == false)
			up(leftY, leftX);
		else if (findL == false && findR == true)
			up(rightY, rightX);
		else
		{
			if ((lenA - leftY) * (lenB - leftX) > (lenA - rightY) * (lenB - rightX))
				up(leftY, leftX);
			else
				up(rightY, rightX);
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
