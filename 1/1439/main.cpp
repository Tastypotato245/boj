// https://www.acmicpc.net/problem/1439
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

string s;

/*
   단순히 생각해봤을 때, S의 길이는 100만, 1,000,000 보다 작기 때문에
   모든 경우의 수를 해볼 수는 없을 것 같다.

   0으로 만드는 경우와 1로 만드는 경우 두 가지를 생각해야한다.

   사실 하나의 케이스를 다른 케이스로 전체를 뒤집으면, 두 경우를 하나로 봐도 된다.


   일단 생각이 나는 건, 연속된 0과 연속된 1의 세그먼트의 개수를 세서, 더 작은 쪽을 선택하면 어떨까?


   000111000111000

   그럼 연속된 0보다 연속된 1이 2그룹으로 적으니까 2번만 뒤집으면 된다.

   근데 만약 뒤섞여있어서 더 빠르게 할 수 있는 경우가 있을까?

   00110011001100

   일단 위 풀이대로라면 3번만에 할 수 있다.
   그런데

   1100110011 부분을 뒤집으면 아래처럼 된다.

   00001100110000

   마찬가지로 두개가 남고, 결국 한번 + 2 해서 3번 해야한다.

   다른 케이스는 없는 것으로 보인다.

 */
void Solve()
{
	// INPUT
	cin >> s;

	// LOGIC

	int cnt_zero = 0, cnt_one = 0;

	// 일단 개수 세기?
	// @todo @kslee 여기서 세그먼트 개수까지 같이 셀 수 있을듯?
	// 근데 가독성을 위해 따로 나누고 최적화하자
	for (auto c : s)
	{
		if (c == '0')
			cnt_zero++;
		else if (c == '1')
			cnt_one++;
	}

	// 일단 모두 1인 경우와 모두 0인 경우를 얼리리턴한다.
	// 또한 명시적으로 s.size() 가 0 인 경우도 얼리 리턴한다. (유지보수를 위해)
	if (s.size() == 0 || cnt_zero == 0 || cnt_one == 0)
	{
		cout << 0;
		return ;
	}

	// 세그먼트 개수 세기
	int cnt_zero_seg = 0, cnt_one_seg = 0;
	// 위에서 size() == 0 인 경우를 배제했기 때문에 안전하다.
	char prev = s[0];
	for (int i = 1 ; i < s.size() ; ++i)
	{
		if (prev == s[i])
			continue;
		else if (prev != s[i])
		{
			// 다른 경우, 이전까지 세던 세그먼트가 끝났다는 뜻
			if (prev == '0')
				cnt_zero_seg++;
			else if (prev == '1')
				cnt_one_seg++;
			prev = s[i];
		}
	}
	// 마지막 끝났을 때도 세어주어야 함
	// 같은 내용이라 함수화 하거나, 아니면 배열로 넣어서 한줄로 만들 수도 있겠다.
	if (prev == '0')
		cnt_zero_seg++;
	else if (prev == '1')
		cnt_one_seg++;

	// 둘 중 개수가 작은 만큼 뒤집으면 된다.
	cout << min(cnt_zero_seg, cnt_one_seg);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
