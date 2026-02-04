#include <iostream>
#include <queue>
using namespace std;

int main(void){
    queue<int> q;
    
    int num;
    cin >> num;
    
    for(int i=0; i<num; i++){
        q.push(i+1);
    }
    //front  1 2 3 4 5 6  rear
    int tmp;
    
    for(int i=0; i<num-1; i++){
        q.pop();
        q.push(q.front());
        q.pop();
    }
    
    cout << q.front();
}
