// https://www.acmicpc.net/problem/20336
// github/Tastypotato245/boj

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // 개행 문자 제거

    vector<vector<string>> menus;

    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);
        stringstream ss(line);

        int d;
        ss >> d;

        vector<string> dishes(d);
        for (int j = 0; j < d; ++j) {
            ss >> dishes[j];
        }

        menus.push_back(dishes);
    }

    // 아무 메뉴나 골라도 되므로 첫 번째 메뉴를 고르자
    vector<string> recommend = menus[0];

    cout << recommend.size() << '\n';
    for (const string& dish : recommend) {
        cout << dish << '\n';
    }

    return 0;
}
