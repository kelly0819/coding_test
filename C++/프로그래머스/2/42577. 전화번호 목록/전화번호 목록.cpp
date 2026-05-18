#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    
    sort(phone_book.begin(), phone_book.end());
    
    for(int i=0; i<phone_book.size()-1; i++){
        string a = phone_book[i];
        string b = phone_book[i+1];
        if(b.substr(0, a.size()) == a)
            answer = false;
    }
    
    return answer;
}