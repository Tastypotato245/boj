// https://www.acmicpc.net/problem/25932
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

int	N;

void Solve()
{
	int n;
	cin >> n;
	cin.ignore(); // 개행 제거

	for (int t = 0; t < n; t++) {
		string line;
		getline(cin, line);

		stringstream ss(line);
		vector<int> nums(10);
		bool hasMack = false, hasZack = false;

		for (int i = 0; i < 10; i++) {
			ss >> nums[i];
			if (nums[i] == 18) hasMack = true;
			if (nums[i] == 17) hasZack = true;
		}

		// 입력된 집합 출력
		for (int i = 0; i < 10; i++) {
			cout << nums[i];
			if (i < 9) cout << " ";
		}
		cout << "\n";

		if (hasMack && hasZack)
			cout << "both\n";
		else if (hasMack)
			cout << "mack\n";
		else if (hasZack)
			cout << "zack\n";
		else
			cout << "none\n";

		cout << "\n";
	}
}
int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
