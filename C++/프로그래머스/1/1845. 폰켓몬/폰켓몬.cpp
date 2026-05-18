#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    set<int> s(nums.begin(), nums.end());
    int kind = s.size();
    
    return min(kind, (int)nums.size()/2);
}