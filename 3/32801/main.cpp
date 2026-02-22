// https://www.acmicpc.net/problem/32801
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

long long n, a, b;

long long gcd(long long x, long long y)
{
    while (y)
    {
        long long tmp = x % y;
        x = y;
        y = tmp;
    }
    return x;
}

void Solve()
{
    cin >> n >> a >> b;

    long long lcm = a / gcd(a, b) * b;

    long long fizzbuzz = n / lcm;
    long long fizz = n / a - fizzbuzz;
    long long buzz = n / b - fizzbuzz;

    cout << fizz << " " << buzz << " " << fizzbuzz;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();
    return 0;
}
