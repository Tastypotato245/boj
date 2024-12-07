// https://www.acmicpc.net/problem/5073
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	a, b, c;

void Solve()
{
	while (1)
	{
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break ;
		int arr[3] = {a, b, c};
		sort(arr, arr + 3);
		if (arr[0] + arr[1] <= arr[2])
			cout << "Invalid" << "\n";
		else if (a == b && b == c)
			cout << "Equilateral" << "\n";
		else if (a == b || b == c || a == c)
			cout << "Isosceles" << "\n";
		else
			cout << "Scalene" << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
