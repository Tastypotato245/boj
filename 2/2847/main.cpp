#include <iostream>

using namespace std;

int N;
int arr[101];

int main()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
		cin >> arr[i];

	int ans = 0;
	int now = arr[N - 1];
	for (int i = N - 2 ; i >= 0 ; --i)
	{
		if (arr[i] >= now)
		{
			ans += (now - 1) - arr[i];
			now = now - 1;
		}
		else
			now = arr[i];
	}
	cout << -1 * ans << "\n";

	return (0);
}
