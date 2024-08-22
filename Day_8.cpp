/*
https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem?isFullScreen=true
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    map<string, int> mp;
    
    for(int i=0; i<n; i++){
        string key;
        int value;
        cin >> key >> value;
        
        mp[key] = value;
    }
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    string query;
    
    while(getline(cin, query)){
        if(mp.find(query) != mp.end()){
            cout << query << "=" << mp[query] << endl;
        }
        else{
            cout << "Not found" << endl;
        }
    }

    return 0;
}