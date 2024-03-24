// https://www.acmicpc.net/problem/2448
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void print_space(int n)
{
	for (int i = 0 ; i < n ; ++i)
		cout << " ";
}

void divide_n_conquer(int i, int n)
{
	int mod = i % 3;
	int half = n / 2;

	if (n == 3)
	{
		if (mod == 0)
			cout << "  *  ";
		else if (mod == 1)
			cout << " * * ";
		else if (mod == 2)
			cout << "*****";
	}
	else
	{
		if (i < half)
		{
			print_space(half);
			divide_n_conquer(i % half, half);
			print_space(half);
		}
		else
		{
			divide_n_conquer(i % half, half);
			print_space(1);
			divide_n_conquer(i % half, half);
		}
	}
}

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		divide_n_conquer(i, N);
		cout << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
