#include <iostream>
#include <queue>
using namespace std;

int main(void){
    queue<int> q;
    
    int num;
    cin >> num;
    
    if(num < 1 || num > 10000){
        return 0;
    }
    
    string str;
    for(int i=0; i<num; i++){
        
        cin >> str;
        
        if(str == "push"){
            int x;
            cin >> x;
            q.push(x);
        }else if(str == "pop"){
            if(q.empty()){
                cout << "-1" << endl;
            }else{
                cout << q.front() << endl;
                q.pop();
            }
        }else if(str == "size"){
            cout << q.size() << endl;
        }else if(str == "empty"){
            if(q.empty()){
                cout << "1" << endl;
            }else{
                cout << "0" << endl;
            }
        }else if(str == "front"){
            if(q.empty()){
                cout << "-1" << endl;
            }else{
                cout << q.front() << endl;
            }
        }else if(str == "back"){
            if(q.empty()){
                cout << "-1" << endl;
            }else{
                cout << q.back() << endl;
            }
        }
        
    }
}
