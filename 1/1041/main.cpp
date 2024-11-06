// https://www.acmicpc.net/problem/1041
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

long long N;
long long a, b, c, d, e, f;

void Solve()
{
	cin >> N;
	cin >> a >> b >> c >> d >> e >> f;

	long long duo = 200, tri = 200, mono = 200, mono_max = 0;

	tri = min(tri, a + b + c);
	tri = min(tri, a + b + d);
	tri = min(tri, a + e + c);
	tri = min(tri, a + e + d);
	tri = min(tri, f + b + c);
	tri = min(tri, f + b + d);
	tri = min(tri, f + e + c);
	tri = min(tri, f + e + d);

	duo = min(duo, a + b);
	duo = min(duo, a + c);
	duo = min(duo, a + d);
	duo = min(duo, a + e);
	duo = min(duo, f + b);
	duo = min(duo, f + c);
	duo = min(duo, f + d);
	duo = min(duo, f + e);
	duo = min(duo, b + c);
	duo = min(duo, b + d);
	duo = min(duo, e + c);
	duo = min(duo, e + d);

	mono = min(mono, a);
	mono = min(mono, b);
	mono = min(mono, c);
	mono = min(mono, d);
	mono = min(mono, e);
	mono = min(mono, f);

	mono_max = max(mono_max, a);
	mono_max = max(mono_max, b);
	mono_max = max(mono_max, c);
	mono_max = max(mono_max, d);
	mono_max = max(mono_max, e);
	mono_max = max(mono_max, f);
	
	if (N == 1)
		cout << a + b + c + d + e + f - mono_max << "\n";
	else 
		cout << 4 * tri + (8 * N - 12) * duo + (5 * N * N - 16 * N + 12) * mono << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
