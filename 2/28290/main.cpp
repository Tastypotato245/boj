// https://www.acmicpc.net/problem/28290
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	string userInput; cin >> userInput;

	const string inOut1 = "fdsajkl;", inOut2 = "jkl;fdsa";
	const string outIn1 = "asdf;lkj", outIn2 = ";lkjasdf";
	const string stairs = "asdfjkl;";
	const string reverse = ";lkjfdsa";
	if (userInput == inOut1 || userInput == inOut2)
		cout << "in-out" << '\n';
	else if (userInput == outIn1 || userInput == outIn2)
		cout << "out-in" << '\n';
	else if (userInput == stairs)
		cout << "stairs" << '\n';
	else if (userInput == reverse)
		cout << "reverse" << '\n';
	else
		cout << "molu" << '\n';
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
