// https://www.acmicpc.net/problem/1920

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	N;
int M;

vector<int> A;
vector<int> B;

void Input()
{
	int tmp;

	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> tmp;
		A.push_back(tmp);
	}
	cin >> M;
	for (int i = 0; i < M; ++i)
	{
		cin >> tmp;
		B.push_back(tmp);
	}
	sort(A.begin(), A.end());
}

bool BinarySearch(int dst)
{
	int mid;
	int low = 0;
	int high = N - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;
		if (A[mid] == dst)
			return (true);
		else if (A[mid] < dst)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (false);
}

void Solve()
{
	for (int i = 0; i < M; ++i)
		cout << (int)BinarySearch(B[i]) << "\n";
}


int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Solve();
	return (0);
}
