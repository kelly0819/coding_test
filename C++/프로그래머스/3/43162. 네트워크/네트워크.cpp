#include <string>
#include <vector>

using namespace std;

bool visited[201] = {false};

void dfs(vector<vector<int>> computers, int now, int n){
    visited[now] = true;
    for(int i=0; i<n; i++){
        if(computers[now][i] == 1 && !visited[i]){
            dfs(computers, i, n);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    for(int i=0; i<n; i++){

        if(!visited[i]){
             dfs(computers, i, n);
             answer++;
        } 
    }
    
    return answer;
    
}