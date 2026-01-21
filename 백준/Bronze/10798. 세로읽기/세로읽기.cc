#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s[5];
    for (int i = 0; i < 5; i++) {
        getline(cin, s[i]);
    }

    // 가장 긴 문자열 길이 구하기
    int maxLen = 0;
    for (int i = 0; i < 5; i++) {
        if (s[i].length() > maxLen) {
            maxLen = s[i].length();
        }
    }

    // 결과 저장 버퍼
    char buf[100];
    int idx = 0;

    // 세로 읽기
    for (int col = 0; col < maxLen; col++) {
        for (int row = 0; row < 5; row++) {
            if (col < s[row].length()) {
                buf[idx++] = s[row][col];
            }
        }
    }

    // 문자열 끝 표시
    buf[idx] = '\0';

    // 한 번에 출력
    cout << buf;

    return 0;
}
