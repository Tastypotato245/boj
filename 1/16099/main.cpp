// https://www.acmicpc.net/problem/16099
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;

	for (int i = 0 ; i < N ; ++i)
	{
		long long lt, wt, le, we;
		cin >> lt >> wt >> le >> we;
		long long TelecomParisTech = lt * wt;
		long long Eurecom = le * we;
		if (TelecomParisTech > Eurecom)
			cout << "TelecomParisTech\n";
		else if (TelecomParisTech < Eurecom)
			cout << "Eurecom\n";
		else
			cout << "Tie\n";
	}

}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
