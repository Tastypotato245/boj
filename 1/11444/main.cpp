// https://www.acmicpc.net/problem/11444

#include <iostream>
#include <map>
using namespace std;

map<long,long> m;

#define MOD 1000000007

long long fib(long long x){
    long long result;

    if(m[x]) return m[x];
    if(x % 2 == 0)
		result = (fib(x/2)*(fib(x/2+1)+fib(x/2-1))) % MOD;
    else
		result = ((fib((x+1)/2) * fib((x+1)/2)) % MOD)+((fib((x-1)/2)*fib((x-1)/2)) % MOD) % MOD;
    return m[x] = result % MOD;
}

int main(){
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);

    long long n;
    cin >> n;
    m[0] = 0;
    m[1] = 1;
    m[2] = 1;
    cout << fib(n);
}
