#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    map<string, int> m;
    
    for(auto v : clothes){
        m[v[1]]++;
    }
    
    answer =1;
    for(auto x : m){
       answer *=  (x.second+1);
    }
    answer -= 1;
    
    return answer;
}