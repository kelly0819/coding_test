#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main(){
    
    int S=0;
    cin >> S;
    if(S > 1000)
        fprintf(stderr, "1000보다 작거나 같아야 합니다");
    
    int *arr = new int[S];
    
    for(int i=0; i<S; i++){
        cin >> arr[i];
    }
    
    int maxVal = *max_element(arr, arr+S);
    
    float sum=0;
    
    for(int j=0; j<S; j++){
        sum += (float)arr[j]/maxVal*100.0;
    }
    
    cout << (sum/S);
    
    
    
    

}