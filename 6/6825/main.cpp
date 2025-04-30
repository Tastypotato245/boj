// https://www.acmicpc.net/problem/6825
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

double weight, height;

void Solve()
{
	cin >> weight >> height;
	double BMI = weight / (height * height);

	if (BMI > 25.0)
		cout << "Overweight";
	else if (BMI < 18.5)
		cout << "Underweight";
	else
		cout << "Normal weight";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
