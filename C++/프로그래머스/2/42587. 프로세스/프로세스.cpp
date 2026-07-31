#include <string>
#include <vector>
#include <queue>


using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int, int>> q;
    priority_queue<int> pq;
    
    for(int i=0; i<priorities.size(); i++){
        q.push({i,priorities[i]});
        pq.push(priorities[i]);
    }
    
    while(!q.empty()){
        auto cur = q.front();
        q.pop();
        
        if(cur.second == pq.top()){
            answer++;
            pq.pop();
            
            if(cur.first == location)
                return answer;
        }else{
            q.push(cur);
        }
        
    }
    return answer;
}