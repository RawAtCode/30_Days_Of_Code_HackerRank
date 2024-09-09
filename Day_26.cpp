/*
https://www.hackerrank.com/challenges/30-nested-logic/problem?isFullScreen=true
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int day, month, year;
    cin >> day >> month >> year;
    
    int dueD, dueM, dueY;
    cin >> dueD >> dueM >> dueY;
    
    int fine;
    
    if (year < dueY || (year == dueY && month < dueM) || (year == dueY && month == dueM && day <= dueD)) {
        fine = 0;
    }
    else if(month == dueM && year == dueY){
        fine = 15 * (day - dueD);
    }
    else if(year == dueY){
        fine = 500 * (month - dueM);
    }
    else{
        fine = 10000;
    }
    
    cout << fine;
    
    
    return 0;
}
