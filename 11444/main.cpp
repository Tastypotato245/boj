// https://www.acmicpc.net/problem/

#include <iostream>
#include <algorithm>

using namespace std;

int	N = 0;
vector<long long> PiboVec;

void Input()
{
	cin >> N;
}

void MakePiboVec()
{
	int	i = 1;

	PiboVec.push_back(0);
	PiboVec.push_back(1);
	while (++i < N)
		PiboVec.push_back(PiboVec[i - 1] + PiboVec[i - 2]);
}

void Solve()
{
	MakePiboVec();

}

void Output()
{
	cout << PiboVec[N - 1] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Solve();
	Output();
	return (0);
}
