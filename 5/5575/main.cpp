// https://www.acmicpc.net/problem/5575
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;


void Solve()
{
	int h_b, m_b, s_b, h_e, m_e, s_e;
	for (int i = 0 ; i < 3 ; ++i)
	{
		cin >> h_b >> m_b >> s_b >> h_e >> m_e >> s_e;

		int h, m, s, m_carry, h_carry;

		int diff_s = s_e - s_b;
		s = diff_s >= 0 ? diff_s : 60 + diff_s;

		int diff_m = m_e - m_b - (diff_s < 0);
		m = diff_m >= 0 ? diff_m : 60 + diff_m;

		h = h_e - h_b - (diff_m < 0);
		cout << h << " " << m << " " << s << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
