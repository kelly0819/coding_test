#include <string>
#include <vector>

using namespace std;
int answer = 0;

void dfs(vector<int>& numbers, int target, int index, int sum){
    if(index == numbers.size()){
        if(sum == target)
            answer++;
        
        return;
    }
    
    dfs(numbers, target, index+1, sum+numbers[index]);
    dfs(numbers, target, index+1, sum-numbers[index]);
    
}
int solution(vector<int> numbers, int target) {
    answer = 0;
    dfs(numbers, target, 0,0);
    return answer;
}