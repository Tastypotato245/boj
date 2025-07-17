// https://www.acmicpc.net/problem/18691
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
  int caseCnt;
  cin >> caseCnt;

  for (int i = 0; i < caseCnt; i++)
  {
    int group, initialCandies, evolveCandies;

    cin >> group >> initialCandies >> evolveCandies;

    int requiredCandies = evolveCandies - initialCandies;
    int requriedKm;

    if (group == 1) requriedKm = requiredCandies;
    else if (group == 2) requriedKm = 3 * requiredCandies;
    else requriedKm = 5 * requiredCandies;

    if (requriedKm <= 0) cout << "0\n";
    else  cout << requriedKm << "\n";
  }
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
