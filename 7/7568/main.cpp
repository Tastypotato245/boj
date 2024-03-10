// https://www.acmicpc.net/problem/7568

#include <iostream>
#include <algorithm>
#include <tuple>
#include <vector>

using namespace std;
// grade, pos, x, y
//vector<tttt> v;
//
//bool Comp(const tttt &a, const tttt &b)
//{
//	if (get<2>(a) >= get<2>(b) && get<3>(a) > get<3>(b) || 
//			get<2>(a) > get<2>(b) && get<3>(a) >= get<3>(b))
//		return (true);
//	return (false);
//}
//
//void Input()
//{
//	cin >> N;
//	v.resize(N);
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> get<2>(v[i]) >> get<3>(v[i]);
//		get<1>(v[i]) = i;
//	}
//}
//
//void Output()
//{
//	for (int i = 0; i < N; ++i)
//	{
//		cout << "0: "<< get<0>(v[i]) << " |";
//		cout << "1: "<< get<1>(v[i]) << " |";
//		cout << "2: "<< get<2>(v[i]) << " |";
//		cout << "3: "<< get<3>(v[i]) << "\n";
////		cout << get<1>(v[i]) << " ";
//	}
//}
//
//void Solve()
//{
//	sort(v.begin(), v.end(), Comp);
//	get<0>(v[0]) = 1;
//	int i;
//	int cnt = 1;
//	for (i = 1; i < N; ++i)
//	{
//		if (Comp(v[i - 1], v[i]))
//			get<0>(v[i]) = get<0>(v[i - 1]) + cnt;
//		else
//		{
//			get<0>(v[i]) = get<0>(v[i - 1]);
//			++cnt;
//		}
//		swap(get<0>(v[i - 1]), get<1>(v[i - 1]));
//	}
//	swap(get<0>(v[i - 1]), get<1>(v[i - 1]));
//	sort(v.begin(), v.end());
//}


using ttt = tuple<int, int, int>;

bool Comp(const ttt &a, const ttt &b)
{
	if (get<1>(a) > get<1>(b) && get<2>(a) > get<2>(b))
		return (true);
	return (false);
}

int	N;
vector<ttt> v;

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	v.resize(N);
	for (int i = 0; i < N; ++i)
		cin >> get<1>(v[i]) >> get<2>(v[i]);
	for (int i = 0; i < N; ++i)
	{
		int cnt = 0;
		for (int j = 0 ; j < N ; ++j)
			if (i != j && Comp(v[j], v[i]))
				++cnt;
		get<0>(v[i]) = cnt + 1;
	}
	for (int i = 0; i < N; ++i)
		cout << get<0>(v[i]) << " ";
	return (0);
}
