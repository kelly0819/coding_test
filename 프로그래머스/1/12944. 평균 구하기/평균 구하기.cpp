#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int num = 0;
    int sum = 0;
    num = arr.size();
    
    for(int i=0; i<num; i++){
        sum+=arr[i];
    }
    answer = (double)sum/num;
    return answer;
}