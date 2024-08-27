/*
https://www.hackerrank.com/challenges/30-review-loop/problem?isFullScreen=true
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    
    vector<string> str(t);
    
    for(int i=0; i<t; i++){
        cin >> str[i];
    }
    
    
    for(int i=0; i<t; i++){
        for(int j=0; j<str[i].size(); j+=2){
            cout << str[i][j];
        }
        cout << " ";
        
        for(int j=1; j<str[i].size(); j+=2){
            cout << str[i][j];
        }
        
        cout << endl;
    }
    
    
    return 0;
}
