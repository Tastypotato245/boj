// https://www.acmicpc.net/problem/31495
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	string S;
	getline(cin, S);

	// 길이가 최소 2는 되어야 " " 형태 가능
	if (S.size() < 2)
	{
		cout << "CE\n";
		return;
	}

	// 시작과 끝이 큰따옴표인지 확인
	if (S.front() != '"' || S.back() != '"')
	{
		cout << "CE\n";
		return;
	}

	// 큰따옴표 내부 문자열
	string inside = S.substr(1, S.size() - 2);

	// 내부가 빈 문자열이면 CE
	if (inside.empty())
	{
		cout << "CE\n";
		return;
	}

	cout << inside << '\n';
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return (0);
}
