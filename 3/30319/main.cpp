// https://www.acmicpc.net/problem/30319
// github/Tastypotato245/boj

#include <iostream>
#include <string>

using namespace std;

void Solve()
{
    string date;
    cin >> date;

    int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5, 2));
    int day = stoi(date.substr(8, 2));

    // 기준 날짜: 2023-09-16
    int limitMonth = 9;
    int limitDay = 16;

    if (month > limitMonth ||
        (month == limitMonth && day > limitDay))
    {
        cout << "TOO LATE";
    }
    else
    {
        cout << "GOOD";
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();
    return 0;
}
