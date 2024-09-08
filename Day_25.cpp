/*
https://www.hackerrank.com/challenges/30-running-time-and-complexity/problem?isFullScreen=true
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    
    if(n == 2){
        return true;
    }
    
    if(n % 2 == 0){
        return false;
    }
    
    for(int i=3; i<=sqrt(n); i+=2){
        if(n % i == 0){
            return false;
        }
    }
    
    return true;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int t;
    cin >> t;
    
    int n;
    for(int i=0; i<t; i++){
        cin >> n;
        
        if(isPrime(n)){
            cout << "Prime" << endl;
        }
        else{
            cout << "Not prime" << endl;
        }
    }
    
    
    
    return 0;
}
