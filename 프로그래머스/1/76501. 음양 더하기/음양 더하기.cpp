#include <string>
#include <vector>

using namespace std;

//sign = 1이면 양수, 0이면 음수
int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 123456789;
    int aNum = absolutes.size();
    
    answer = 0;
    for(int i=0; i<aNum; i++){
        if(signs[i] == true){
            answer += absolutes[i];
        }else{
            answer += absolutes[i] * (-1);
        }
    }
    return answer;
}