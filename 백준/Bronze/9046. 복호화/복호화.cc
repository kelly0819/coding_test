#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    cin.ignore(); // 개행 제거

    while (T--) {
        string s;
        getline(cin, s);

        int cnt[26] = {0};
        for (char c : s) {
            if ('a' <= c && c <= 'z') cnt[c - 'a']++;
        }

        int mx = 0;
        for (int i = 0; i < 26; i++) mx = max(mx, cnt[i]);

        int howMany = 0, idx = -1;
        for (int i = 0; i < 26; i++) {
            if (cnt[i] == mx) { howMany++; idx = i; }
        }

        if (howMany == 1) cout << char('a' + idx) << "\n";
        else cout << "?\n";
    }
}