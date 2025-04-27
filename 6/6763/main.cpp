// https://www.acmicpc.net/problem/6763
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	limit, speed;

void Solve()
{
	cin >> limit >> speed;

	if (limit < speed)
	{
		int above = speed - limit;
		int fine = 0;
		if (above <= 20)
			fine = 100;
		else if (above <= 30)
			fine = 270;
		else
			fine = 500;
		cout << "You are speeding and your fine is $" << fine << ".";
	}
	else
		cout << "Congratulations, you are within the speed limit!";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
