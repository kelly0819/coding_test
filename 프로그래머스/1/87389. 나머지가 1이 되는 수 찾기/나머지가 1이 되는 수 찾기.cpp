#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0; //x
    vector <int> arr;
    
    for(int i=1; i<n; i++){
        if(n%i == 1){
            arr.push_back(i);
        }
    }
    
    answer = *min_element(arr.begin(), arr.end());
    
    return answer;
}