/*
https://www.hackerrank.com/challenges/30-data-types/problem?isFullScreen=true
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    int num;
    cin >> num;
    
    double numD;
    cin >> numD;
    
    string str;
    cin.ignore();
    getline(cin, str);
    
    cout << i+num<<endl;
    cout << fixed << setprecision(1) << d+numD<<endl;
    cout << s+str <<endl;
    
    
    
    return 0;
}
