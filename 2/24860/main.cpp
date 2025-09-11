// https://www.acmicpc.net/problem/24860
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

long long vk, jk, va, ja, vh, dh, jh, lightChainK, lightChainA, heavyChain;

void Solve()
{
  cin >> vk >> jk >> va >> ja >> vh >> dh >> jh;
  lightChainK = vk * jk;
  lightChainA = va * ja;
  heavyChain = vh * dh * jh;
  cout << heavyChain*(lightChainA + lightChainK);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
