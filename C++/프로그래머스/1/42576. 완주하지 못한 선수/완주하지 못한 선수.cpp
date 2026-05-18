#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    for(int i=0; i<completion.size(); i++){ // abcdd
        if(participant[i] != completion[i]){ // abcd
           return participant[i];
        }
    }
    
    
    return participant.back();
}