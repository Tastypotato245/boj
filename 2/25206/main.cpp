// https://www.acmicpc.net/problem/25206
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

string s;
double hakjum;
double puengjum;
double h_sum = 0.0;
double p_sum = 0.0;

void Solve()
{
	for (int i = 0 ; i < 20 ; ++i)
	{
		cin >> s;
		cin >> hakjum;
		cin >> s;
		if (s[0] == 'F') puengjum = 0.0;
		else if (s[0] == 'A' && s[1] == '+') puengjum = 4.5;
		else if (s[0] == 'A' && s[1] == '0') puengjum = 4.0;
		else if (s[0] == 'B' && s[1] == '+') puengjum = 3.5;
		else if (s[0] == 'B' && s[1] == '0') puengjum = 3.0;
		else if (s[0] == 'C' && s[1] == '+') puengjum = 2.5;
		else if (s[0] == 'C' && s[1] == '0') puengjum = 2.0;
		else if (s[0] == 'D' && s[1] == '+') puengjum = 1.5;
		else if (s[0] == 'D' && s[1] == '0') puengjum = 1.0;
		else continue;

		h_sum += hakjum;
		p_sum += hakjum * puengjum;
	}
	printf("%.6f", p_sum / h_sum);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
