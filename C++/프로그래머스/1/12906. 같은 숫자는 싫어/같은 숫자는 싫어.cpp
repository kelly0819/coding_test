#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    answer.push_back(arr[0]);
    
    for(int i=1; i<arr.size(); i++){
        if(arr[i] != arr[i-1])
            answer.push_back(arr[i]);
    }

    return answer;
}

//i랑 i+1 비교해서 같으면 냅두고 다르면 answer에 Push 