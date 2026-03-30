#include <string>
#include <iostream>
#include <cctype> //char 관련 라이브러리
using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    int pNum=0;
    int yNum=0;
    
    for(int i=0; i<s.size(); i++){
        char c = tolower(s[i]);
        if(c == 'p'){
            pNum++;
        }else if(c == 'y'){
            yNum++;
        }
    }
    
    if(pNum == yNum){
        answer = true;
    }else{
        answer = false;
    }

    return answer;
}